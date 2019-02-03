
file_boilerplate = """
#include <stdlib.h>
#include <stdio.h>
$user_includes

int main()
{
	$user_commands

	return 0;
}
"""


def get_full_source( runner ):
	return ( file_boilerplate
		.replace( "$user_commands", runner.get_user_commands_string() )
		.replace( "$user_includes", runner.get_user_includes_string() )
		)

