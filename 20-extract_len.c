#include "main.h"

/**
 * extract_len - search the length of string
 * @s: string
 *
 * Return: length
 */

int extract_len(char *s)
{
	int i = 0;

	for(; s[i] != '\0'; i++)
		;

	return(i);
}
