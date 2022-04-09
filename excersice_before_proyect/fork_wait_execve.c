#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>

/**
 * main - create childs process alone of father
 *
 * Return: 0 in success
 */

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
	int i = 0, pid;

	for (; i < 4; i++)
	{
		pid = fork();
		if (pid != 0)
			i = 4;

		wait(NULL);
	}

	execve(argv[0], argv, NULL);

	return (0);
}
