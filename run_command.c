#include "main.h"

/**
* run_command - run the command digited by user
* @check_equals: command from user
* @command_buffer_save: complete command by user
*
* Return: 0 on success
*/

int run_command(char *check_equals)
{
	int i = 0, pid = 0;
	char *args[] = {check_equals, complemente, NULL};


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
