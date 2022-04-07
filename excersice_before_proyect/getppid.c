#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - print id of the current process, 
 * and id of the father of current procces
 *
 * Return: none
 */

int main(void)
{
	pid_t my_pid, father_pid;

	my_pid = getpid();
	father_pid = getppid();
	printf("%u\n %u\n", my_pid, father_pid);
	return (0);
}
