// experimenting with time functions

#include <iostream>
#include <time.h>
using namespace std;
int main ()
{
    
    
    time_t now;
    struct tm start;
    
    time(&now);  /* get current time; same as: now = time(NULL)  */
    
    start = *localtime(&now);
    
    start.tm_hour = 0; start.tm_min = 0; start.tm_sec = 0;
    start.tm_mon = 7;  start.tm_mday = 2;
    
    seconds = difftime(now,mktime(&start));
    
    
    return 0;
}
