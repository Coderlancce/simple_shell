#include "main.h"

/**
* command_path
* @check_path: buffer with path complete
* @command_buffer: buffer to save the user command
*
* Return: 0 on Success
*/

int command_path(char *check_path, char *command_buffer)
{
	char *buffer_folder = NULL,  *check_equals = NULL;
	struct stat sb;

	buffer_folder = malloc(sizeof(char) * 1024);
	if (buffer_folder == NULL)
		return(EOF);

	buffer_folder = strtok(check_path, ":");
	while (buffer_folder != NULL)
	{
		check_equals = com_vs_path(buffer_folder, command_buffer);
		if (check_equals == NULL)
		{
			free(buffer_folder);
			return (EOF);
		}
		if (stat(check_equals, &sb) == 0)
		{
			run_command(check_equals);
			break;
		}
		buffer_folder = strtok(NULL, ":");
	}

	if (stat(check_equals, &sb) != 0)
		printf("Command '%s' not found\n", command_buffer);
	return (0);	
}
