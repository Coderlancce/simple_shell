#include <stdio.h>
#include <stdlib.h>
/**
* main - prints all arguments
* @ac: count of given arguments
* @av: arguments values
*
* Return: Always 0 (success)
*/
int main (int ac, char *av[])
{
	int i = 0;

	for (i = 0; av[i] != NULL; i++)
		printf("%s\n", av[i]);
	return (0);
}
