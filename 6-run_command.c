#include "main.h"

/**
 * run_command - run the command digited by user
 * @command_ex: command in the path
 * @command_buffer: command of the user
 *
 * Return: 0 on Succes.
 */

int run_command(char *command_ex, char *command_buffer)
{
	char **args;
	int i = 0, pid = 0;
	char *auxline = NULL;
	
	
	auxline = malloc(sizeof(char) * 10);
	if(auxline == NULL)
	{
		free(command_ex);
		free(command_buffer);
		return(EOF);
	}

	args = (char **)malloc(sizeof(char *) * 10);
	if(args == NULL)
	{
		free(auxline);
		free(command_ex);
		free(command_buffer);
		return(EOF);
	}

	auxline = strtok(command_buffer, " ");
	for(i = 0; auxline; i++)
	{
		args[i] = (char *)malloc(sizeof(char) * 10);
		if(args[i] == NULL)
		{
			free(auxline);
			free(command_ex);
			free(command_buffer);
			free(args);
			return(EOF);
		}
		args[i] = auxline;
		auxline = strtok(NULL, " ");
		printf("%s", args[i]);
	}

	pid = fork();
	if (pid > 0)
	wait(NULL);

	if (pid == 0)
	execve(args[0], args, NULL);
	
	free(command_ex);
	free(command_buffer);
	free(auxline);
	free(args);
	free(*args);
	return (0);
}
