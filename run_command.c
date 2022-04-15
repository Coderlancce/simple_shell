#include "main.h"

/**
* run_command - run the command digited by user 
* @check_equals: command from user
*
* Return: 0 on success
*/

int run_command(char *check_equals)
{
	char *args[] = {check_equals, NULL};	
	int i = 0, pid = 0;

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
	return(0);
}
