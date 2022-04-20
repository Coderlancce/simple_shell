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
	int i = 0;

	duplicate = malloc(sizeof(char) * len);
	if(duplicate == NULL)
		return(NULL);

	for (i = 0; s[i]; i++)
		duplicate[i] = s[i];

	return (duplicate);
}
