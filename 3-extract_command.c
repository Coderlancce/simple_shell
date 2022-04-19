#include "main.h"

/**
 * extract_command - search the command in the input
 * @command_buffer: input complet
 *
 * Return: pointer char, NULL in frailure
 */

char *extract_command(char *command_buffer)
{
	char *command_ex = NULL;
	int i;

	command_ex = malloc(sizeof(char) * 10);
	if(command_ex == NULL)
	{
		free(command_buffer);
		return(NULL);
	}

	for(i = 0; command_buffer[i] != '\0'; i++)
	{
		if(command_buffer[i] == ' ')
			break;
		command_ex[i] = command_buffer[i];
	}
	return(command_ex);
}
