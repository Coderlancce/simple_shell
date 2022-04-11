#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*
*/

int main(int ac, char **av, char **env)
{
	unsigned int i = 0, j = 0, current = 0, search = 0;
	char *buffer = NULL, *buffer_get = NULL;
	char *divide_str = NULL; 
	int check = 0; 
	size_t size = 32;

	printf("$ ");
	buffer_get = malloc(sizeof(char) * size);
	if(buffer_get == NULL)
		return (-1); 
	check = getline(&buffer_get, &size, stdin);
	if (check == -1)
	{
		free(buffer_get);
		return (-1);
	}
	buffer_get[check - 1] = 0;

	buffer = malloc(sizeof(char) * 1024);
	if(buffer == NULL)
	{
		free(buffer_get);
		return (-1);
	}

	for (i = 0; env[i] != NULL; i++)
	{
		if(env[i][0] == 'P' && env[i][1] == 'A')
		{
			for(j = 0; env[i][j] != 0; j++)
				buffer[j] = env[i][j];
		}
	}

	divide_str = strtok(buffer, ":");
	if(divide_str == NULL)
		return (-1);

	while (divide_str != NULL)

	{
		
		for (current = 0; divide_str[current]; current++) 
		{
			if (divide_str[current] == buffer_get[search])
			{
				for (search = 0; divide_str[current] == buffer_get[search]; current++, search++)
				{
					if (buffer_get[search] == 0)
					{
						printf("%s\n", divide_str);
					}
				}
			} 
		} 
		divide_str = strtok(NULL, ":");
	}
	
	free(buffer_get);
	free(buffer);
	return (0);
}
