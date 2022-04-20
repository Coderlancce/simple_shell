#include "main.h"

/**
 * wait_command - save the input
 * @check_path: path complete
 *
 * Return: 0 in succes, -1 on frailure
 */

int wait_command(char *check_path)
{
	char *command_buffer = NULL, *command_ex = NULL, *command_buffer_i = NULL;
	size_t aux = 1;
	int check = 0, size = 10, len = 0;

	command_buffer_i = malloc(sizeof(char) * size);
	if (command_buffer_i == NULL)
	{
		free(check_path);
		return (EOF);
	}
	check = getline(&command_buffer_i, &aux, stdin);
	if (check == -1)
	{
		free(check_path);
		free(command_buffer);
		return (EOF);
	}
	len = extract_len(command_buffer);
	command_buffer = malloc(sizeof(char) * len);
	if (command_buffer == NULL)
	{
		free(check_path);
		return (EOF);
	}
	command_buffer = _strdup(command_buffer_i, len);
	free(command_buffer_i);

	command_buffer[check - 1] = '\0';
	command_ex = extract_command(command_buffer);
	if (command_ex == NULL)
	{
		free(check_path);
		free(command_buffer);
		return (EOF);
	}
	command_path(command_ex, command_buffer, check_path);
	printf("Thanks for your command :v\n");

	free(command_buffer);
	return (0);
}
