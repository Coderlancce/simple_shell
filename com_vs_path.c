#include "main.h"

/**
* com_vs_path - 
* @buffer_folder: buffer of divided path
* @command_buffer:buffer to save the user command
*
* Return: 0 on success 
*/

char *com_vs_path(char *buffer_folder, char *command_buffer)
{
	char *buffer_complete_path = NULL;
	int i = 0, j = 0;

	buffer_complete_path = malloc(sizeof(char) * 1024);
	if (buffer_complete_path == NULL)
		return(NULL);
	
	for (i = 0; buffer_folder[i]; i++)
		buffer_complete_path[i] = buffer_folder[i];

	for(; command_buffer[j]; i++, j++)
	{
		if (j == 0 && buffer_complete_path[i - 1] != '/')
		{
			buffer_complete_path[i] = '/';
			i++;
		}
		buffer_complete_path[i] = command_buffer[j];
	}
	return (buffer_complete_path);
}
