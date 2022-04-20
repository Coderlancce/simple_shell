#include "main.h"

/**
* len_command - calculate lenght of given string
* @s: given string
*
* Return: lenght of string
*/

int len_command(char *s)
{
	int i = 0;

	while (s[i] != ' ')
		i++;

	return (i);
}
