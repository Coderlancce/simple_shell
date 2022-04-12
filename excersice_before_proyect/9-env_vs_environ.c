#include <stdio.h>

extern char **environ;

/**
* main - print the addres of env and environ
* @ac: count of arguments
* @av: value of arguments
* @env: env variable
*/

int main(int ac, char **av, char **env)
{
	printf("%p\n", *env);
	printf("%p\n", *environ);

	return(0);
}
