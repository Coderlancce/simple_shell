#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <unistd.h>

#define FAIL -1
#define SUCCESS 0

int function_fork(char *command)
{
	char *args[] = {command, NULL};
	int i = 0, pid = 0;
	
	while (i < 1)
	{
		pid = fork();
		if (pid != 0)
			i = 1;
		wait(NULL);
		i++;
	}

	if (pid == 0)
		execve(args[0], args, NULL);
	return (0);
}


int main(void)
{
	char *command = NULL;
	size_t size = 1024, aux = 1;
	int check = 0, i = 0;

	for (; i < 5;) 
	{
		printf("#cisfun$ ");
		command = malloc(sizeof(char) * size);	
		if (command == NULL)
				return (FAIL);
		check = getline(&command, &aux, stdin);
		if (check == -1)
		{
			free(command);
			return (FAIL);
		}
		command[check - 1] = '\0';

		function_fork(command);
	}

	free(command);
	return (SUCCESS);
}
