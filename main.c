#include "main.h"

/**
 *
 *
 */

int main(void)
{
	int i = 0,
	size_t size = 32;
	char *username = NULL;
	
	create_buffer(username, size);
	printf("Type your username");
	generate_line(username, size);
	while (i < 1)
	{
		fun_print = start_shell(username);
	}
}
