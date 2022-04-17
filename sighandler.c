#include "main.h"

/**
 * sighandler - signal for press ctrl + C
 * @signum: void input
 *
 * Return: void function, no return
 */


void sighandler(int signum)
{
	(void) signum;
	write(STDOUT_FILENO, "\n:) ", 4);
}
