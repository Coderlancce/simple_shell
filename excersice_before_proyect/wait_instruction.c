#include <stdio.h>
#include <stdlib.h>

#define FAIL -1
#define SUCCESS 0

/**
* input = standard input
* @s: string 
* @lenght: expected size
*
* Return: none
*/

int input(char *s, int length);

/**
* main - wait for user to enter a command
*
* Return: Always 0 (success), -1 (failure)
*/

int main (void)
{
	char *command = NULL;
	int check = 0;
	size_t size = 32;

	printf("$ ");
	command = malloc(sizeof(char) * size);
	if (command == NULL)
		return (FAIL);
	check = getline(&command, &size, stdin);
	if (check == -1)
	{
		free(command);
		return (FAIL);	
	}
	printf("$ %s", command);
	return (SUCCESS);
}
