#include "main.h"

/**
 * sighandler - function for exit 
 * @signum: void imput
 *
 * Return: none
 */

void sighandler(int signum)
{
  (void) signum;
  write(STDOUT_FILENO, "\n:) ", 4);
}
