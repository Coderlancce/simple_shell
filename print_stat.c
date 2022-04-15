#include "main.h"

/**
 * fun_print - ask the username and send a buffer with that info
 *
 * Return: username, on frailure NULL
 */

char *fun_print()
{
	char *username = NULL;
	int size = 10, check = 0;
	size_t aux = 1;

	username = malloc(sizeof(char) * size);
	if (username == NULL)
	{
		printf("The buffer wasn't created correctly");
		return (NULL);
	}
	printf("Type your username: ");
	check = getline(&username, &aux, stdin);
	if(check == -1)
	{
		free(username);
		return (NULL);
	}
	username[check - 1] = '\0';

	return (username);
}
