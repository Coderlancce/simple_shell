#include "main.h"

/**
 *
 *
 */

char *create_buffer(char *buffer, size_t size)
{ 
	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
	{
		printf("The buffer wasn't created correctly");
		return (NULL);
	}

	return (buffer);
}
