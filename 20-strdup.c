#include "main.h"

/**
* _strdup - duplicate a string
* @s: given string
* @len: lenght of string
*
* Return: string duplicated
*/

char *_strdup(char *s, int len)
{
	char *duplicate = NULL;

	diplicate = malloc(sizeof(char) * len);
	
	for (i = 0; s[i]; i++)
		duplicate[i] = s[i];
	
	return (duplicate);
}
