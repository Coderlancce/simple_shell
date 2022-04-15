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
	size_t aux = 1;
	int check = 0, size = 10;


	command_buffer = malloc(sizeof(char) * size);
	if(command_buffer == NULL)
 		return(EOF);

	check = getline(&command_buffer, &aux, stdin);
	if(check == -1)
	{
		free(command_buffer);
		return(EOF);
	}
	
	command_buffer[check - 1] = '\0';
	
	command_path(check_path, command_buffer); 

	printf("Thanks for your command :v\n");

	return (0);
}
