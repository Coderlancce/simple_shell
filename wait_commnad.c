#include "main.h"

/**
 * wait_command - wait for the command of the user
 * @check_path: buffer with path complete
 *
 * Return: 0 on Success
 */

int wait_command(char *check_path)
{
	char *command_buffer = NULL, *command_buffer_save;
	size_t aux = 1;
	int check = 0, size = 10, i = 0;

	command_buffer_save = malloc(sizeof(char) * size);
	if (command_buffer_save == NULL)
		return(EOF);
	command_buffer = malloc(sizeof(char) * size);
	if(command_buffer == NULL)
	{
		free(command_buffer_save);
		return(EOF);
	}
	check = getline(&command_buffer_save, &aux, stdin);
	if(check == -1)
	{
		free(command_buffer_save);
		free(command_buffer);
		return(EOF);
	}

	command_buffer_save[check - 1] = '\0';

	for(i = 0; command_buffer_save[i] != '\0'; i++)
	{
		command_buffer[i] = command_buffer_save[i];
		if(command_buffer_save[i + 1] == ' ')
			break;
	}
	command_path(check_path, command_buffer, command_buffer_save);

	printf("Thanks for your command :v\n");

	return (0);
}
