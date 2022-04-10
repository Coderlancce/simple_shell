#include <stdio.h>

/**
*
*/
int main(int ac, char **av, char **env)
{
	unsigned int i = 0;
	char *buffer[4];

	buffer[0] = 'P';
	buffer[1] = 'A';
	buffer[2] = 'T';
	buffer[3] = 'H';
	buffer[4] = "\n";

	while (env[i] == buffer[0])
	{
		/* j = i;
		for (; env[j] != ; j++)
			printf("%s", env[j]);*/
		i++;
		printf("%s\n", env[i]);
	}
	return (0);
}
