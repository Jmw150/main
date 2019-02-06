/*
DNS is an internet service that maps domain names, like cats.org, to IP addresses, like 66.220.0.231.

Use DNS to resolve www.kame.net to both IPv4 and IPv6 addresses. Print these addresses. 

This solution uses getaddrinfo(), a standard function from RFC 3493. This code resembles an example from getaddrinfo(3), the BSD manual page. Whereas the man page code connects to www.kame.net, this code only prints the numeric addresses.

*/

#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>		/* getaddrinfo, getnameinfo */
#include <stdio.h>		/* fprintf, printf */
#include <stdlib.h>		/* exit */
#include <string.h>		/* memset */
 
int
main()
{
	struct addrinfo hints, *res, *res0;
	int error;
	char host[NI_MAXHOST];
 
	/*
	 * Request only one socket type from getaddrinfo(). Else we
	 * would get both SOCK_DGRAM and SOCK_STREAM, and print two
	 * copies of each numeric address.
	 */
	memset(&hints, 0, sizeof hints);
	hints.ai_family = PF_UNSPEC;     /* IPv4, IPv6, or anything */
	hints.ai_socktype = SOCK_DGRAM;  /* Dummy socket type */
 
	/*
	 * Use getaddrinfo() to resolve "www.kame.net" and allocate
	 * a linked list of addresses.
	 */
	error = getaddrinfo("www.kame.net", NULL, &hints, &res0);
	if (error) {
		fprintf(stderr, "%s\n", gai_strerror(error));
		exit(1);
	}
 
	/* Iterate the linked list. */
	for (res = res0; res; res = res->ai_next) {
		/*
		 * Use getnameinfo() to convert res->ai_addr to a
		 * printable string.
		 *
		 * NI_NUMERICHOST means to present the numeric address
		 * without doing reverse DNS to get a domain name.
		 */
		error = getnameinfo(res->ai_addr, res->ai_addrlen,
		    host, sizeof host, NULL, 0, NI_NUMERICHOST);
 
		if (error) {
			fprintf(stderr, "%s\n", gai_strerror(error));
		} else {
			/* Print the numeric address. */
			printf("%s\n", host);
		}
	}
 
	/* Free the linked list. */
	freeaddrinfo(res0);
 
	return 0;
}
