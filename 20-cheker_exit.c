#include "main.h"

/**
 * cheker_exit - check if the user put exit
 * @command_buffer: pointer with the input
 *
 * Return: EOF if are exit, 0 if no is exit
 */

int cheker_exit(char *command_buffer)
{
	char command_exit[4] = "exit";
	int i = 0;

	if (command_buffer[i] == command_exit[i])
	{
		for (; command_buffer[i] == command_exit[i]; i++)
		{
			if (command_exit[i] == 't')
			return (EOF);
		}
	}
	return (0);
}
