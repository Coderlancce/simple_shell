#include <stdio.h>

/**
*
*/

int main(int ac, char **av, char **env)
{
	int i = 0;
	
	for (i = 0; env[i]; i++)
		printf("%s\n", env[i]);
}
