#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - print each directory of path line per line
* @ac: count of arguments
* @av: value of arguments
* @env: enviroment variable
* Return: Always 0 (success)
*/

int main(int ac, char **av, char **env)
{
	char *checker = NULL, *buffer = NULL;

	checker = getenv("PATH");
	if (checker == NULL)
		return (-1);\
	
	buffer = strtok(checker, "/");
	while (buffer)
	{
		if (buffer[0] != ':')
			printf("%s\n", buffer);
		buffer = strtok(NULL, "/");
	}

	return (0);
}
