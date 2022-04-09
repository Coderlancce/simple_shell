#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ERROR -1
#define SUCCESS 0

/**
* @strlen - find size of the lenght of a string
* @s: given string
*
* Return: lenght of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
} 

/**
* _strmdf - asign characters to head memory
* @s: given string
* @buffer: buffer space
*
* Return: pointer to asigned head memory 
*/

char *_strmdf(char *s, char *buffer)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		buffer[i] = s[i];
	return(buffer);
}

/**
* _strtok 
*/

char *_strtok (char *str, char *character)
{
	char *buffer = NULL, *agd = NULL;
	int i = 0, j = 0, lenght = 0;
	
	if (str)
	{
		lenght = _strlen(str);
		buffer = malloc(sizeof(char) * lenght);	
		if (buffer == NULL)
			return (NULL);
		agd = _strmdf(str, buffer); 
		if (agd == NULL)
		{
			free (buffer);
			return (NULL);
		}

		for (; str[i]; i++)
		{	
			if (str[i] == character[0])
				buffer[i] = '\0';
		}
		
		for (; buffer[j]; j++)
		{
			
		}

		return (buffer[i]);
	
	}
	
	else if (str == NULL)
	{
		
	{
} 

/**
* main - splits a string and retunr an array
* @ac: counter of arguments
* @av: given string between ""
*
* Return: string splitted by spaces
*/

int main (int ac, char *av[])
{
	char *buffer = NULL, *assigned = NULL, *divide_str = NULL;	
	int lenght = 0;

	lenght = _strlen(av[1]);

	buffer = malloc(sizeof(char) * lenght);
	if (buffer == NULL)
		return (ERROR);
	assigned = _strmdf(av[1], buffer);
	if (assigned == NULL)
	{
		free(buffer);
		return (ERROR);
	}
	divide_str = _strtok(buffer, " ");
	if (divide_str == NULL)
	{
		free(buffer);
		return (ERROR);
	}
	
	while (divide_str != NULL)
	{
		printf("%s\n", divide_str);
		divide_str = _strtok(NULL, " ");
	}

	free(buffer);
	return(SUCCESS);
}
