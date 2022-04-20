#include "main.h"

/**
* len_path - count the length of a string
*
* Return: lenght of string
*/

int len_path(void)
{
	int i = 0, j = 0;

	for (; environ[i]; i++)
	{
		if (environ[i][j] == 'P' && environ[i][j + 1] == 'A')
		{
			j = 0;
			while (environ[i][j])
				j++;
		}
	}
	return(j);
}
