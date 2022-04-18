#include "main.h"

/**
 * wait_command - wait for the command of the user
 * @check_path: buffer with path complete
 *
 * Return: 0 on Success
 */

int wait_command(char *check_path)
{
	char *command_buffer = NULL;
	char **return_args = NULL, **buffer_args = NULL;
	size_t aux = 1;
	int check = 0, size = 10, i = 0;

	command_buffer = malloc(sizeof(char) * size);
	if (command_buffer == NULL)
		return (EOF);

	check = getline(&command_buffer_save, &aux, stdin);
	if (check == -1)
	{
		free(command_buffer);
		return (EOF);
	}

	command_buffer[check - 1] = '\0';

	return_args = line_to_argv(command_buffer, buffer_args);
	if (return_args == NULL)
	{
		free(command_buffer);
		return(EOF);
	}

	command_path(check_path, command_buffer, return_args);

	printf("Thanks for your command :v\n");

	return (0);
}
