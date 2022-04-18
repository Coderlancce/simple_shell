#include "main.h"

/**
 * main - print a terminal
 *
 * Return: 0 on Success
 */

int main(void)
{
	char *print_stat = NULL, *check_path = NULL;
	int i = 0, j = 0;

	signal(SIGINT, sighandler);
	print_stat = fun_print();

	for (; i == 0; i += j)
	{
		check_path = search_path();
		printf("%s$ ", print_stat);
		j = wait_command(check_path);
	}

	return (0);
}
