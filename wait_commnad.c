#include "main.h"

/**
 *
 *
 */

int wait_command(void)
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

	printf("Gracias por poner tu comando :v\n");

	return (0);
}
