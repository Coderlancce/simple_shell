#include "main.h"

/**
* line_to_argv -
*
*/

char **line_to_argv(char *command_buffer, char **buffer_args)
{
	int i = 0;
	char *aux_line = NULL;

	aux_line = strtok(line, " ");
	if (aux_line == NULL)
		return (NULL);
	{
		buffer_args[i] = aux_line;
		aux_line = strtok(NULL, " ");
	}
	buffer_args[i] = NULL;

	return(buffer_args)
}
