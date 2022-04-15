#include "main.h"

/**
 *
 *
 */

int main(void)
{
	char *print_stat = NULL, *check_path = NULL;
	int i = 0;

	print_stat = fun_print();

	for(; i < 10; i++)
	{
		check_path = search_path();
		printf("%s$ ", print_stat);
		wait_command(check_path);
	}

	return (0);
}
