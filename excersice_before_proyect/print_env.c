#include <stdio.h>

/**
*
*/

int main(int ac, char **av, char **env)
{
	unsigned int i = 0, j = 0;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if(buffer == NULL)
		return (-1);
	for (i = 0; env[i] != NULL; i++)
	{
		if(env[i][0] == 'P' && env[i][1] == 'A')
		{
			for(j = 0; env[i][j] != 0; j++)
				buffer[j] = env[i][j];
		}
	}

	divide_str = strtok(buffer, ':');
	if(divide_str == NULL)
		return (-1);

	while (divide_str != NULL)
	{
		printf("%s\n", divide_str);
		divide_str = _strtok(NULL, ":");
	}
	free(buffer);
	return (0);
}
