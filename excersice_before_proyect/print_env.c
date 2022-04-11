#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
*
*/

char *complete_path(char *divide_str, char *buffer_get)
{
	int i = 0, j = 0;
	char *buffer_another;

	buffer_another = malloc(sizeof(char) * 1024);

	for ( i = 0; divide_str[i]; i++)
	{
		buffer_another[i] = divide_str[i];
	}

	for (; buffer_get[j]; i++, j++)
	{
		if (j == 0 && buffer_another[i - 1] != '/')
		{
			buffer_another[i] = '/';
			i++;
		}
		buffer_another[i] = buffer_get[j];
	}
	return (buffer_another);
}

/**
*
*/

int main(int ac, char **av, char **env)
{
	unsigned int i = 0, j = 0; 
	char *buffer = NULL, *buffer_get = NULL;
	char *divide_str = NULL, *cp_ = NULL; 
	int check = 0; 
	size_t size = 32;
	struct stat sb;

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
		cp_ = complete_path(divide_str, buffer_get);
		if(cp_ == NULL)
		{
			free(buffer_get);
			free(buffer);
			return(-1);
		}
		if(stat(cp_, &sb) == 0)
			printf("%s\n", cp_);
		
		divide_str = strtok(NULL, ":");
	}
	
	free(buffer_get);
	free(buffer);
	free(cp_);
	return (0);
}
