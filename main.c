#include "main.h"

/**
 *
 *
 */

int main(void)
{
	char *print_stat = NULL;
	int i = 0;

	print_stat = fun_print();
	for(; i < 10; i++)
	{
		printf("%s$ ", print_stat);
		wait_command();
	}

	return (0);
}
