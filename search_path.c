#include "main.h"

/**
* search_path - save in a buffer all path
*
* Return: the buffer with the path
*/

char *search_path(void)
{
	int i = 0, j = 0;
	char *buffer_path = NULL;


	buffer_path = malloc(sizeof(char) * 1024);
	if (buffer_path == NULL)
		return (NULL);

	for (; environ[i]; i++)
	{
		if (environ[i][j] == 'P' && environ[i][j + 1] == 'A')
		{
			for (j = 0; environ[i][j]; j++)
				buffer_path[j] = environ[i][j];
			break;
		}
	}

	return (buffer_path);
}
