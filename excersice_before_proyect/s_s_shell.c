#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <unistd.h>

#define FAIL -1
#define SUCCESS 0

int main(void)
{
	int i = 0, check = 0;
	char *command = NULL, *buffer[1];
	size_t size = 32;

	while (i < 6)
	{
		printf("#cisfun$ ");
		command = malloc(sizeof(char) * size);
		if (command == NULL)
			return (FAIL);
		check = getline(&command, &size, stdin);
		if (check == -1)
		{
			free(command);
			return (FAIL);
		} 
		buffer[0] = command;
		buffer[1] = NULL;

		execve("bin/ls", buffer, NULL);

		i++;
	}

	free(command);
	return (SUCCESS);
}
