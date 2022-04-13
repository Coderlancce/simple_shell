#include "main.h"

/**
 *
 *
 */

char *generate_line(char *username, size_t size)
{
	char *check;

	check = getline(&username, &size, stdin);
	if(check == -1)
		return (NULL);

	return(check);
}
