#include "main.h"

/**
* run_command - run the command digited by user 
* @check_equals: command from user
*
* Return: 0 on success
*/

int run_command(char *check_equals, char *command_buffer_save)
{
	char *complement = NULL;
	int i = 0, pid = 0, j = 0, k = 0;

	complement = malloc(sizeof(char) * 24);

	for(j = 0; command_buffer_save[j] != '\0'; j++)
	{
		if(command_buffer_save[j] == '-')
		{
			while(command_buffer_save[j])
			{
				complement[k] = command_buffer_save[j];
				j++;
				k++;
			}
		}
	}
	char *args[] = {check_equals, complement, NULL};


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
