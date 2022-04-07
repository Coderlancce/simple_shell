#include <unistd.h>

/**
 *
 */

int main()
{
	int fd, n_read, n_dir;
	char *buffer;

	n_dir = chdir(/proc/sys/kernel/pid_max);
	if (n_dir == -1)
		return (-1);

	buffer = malloc(sizeof(char) * 10);
	if (buffer == NULL)
		return (-1);

	fd = open(pid_max, RDONLY)
	if (fd == -1)
	{
		free (buffer);
		return (-1);
	}
	n_read = read(fd, buffer, 10);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (-1);
	}
	printf("%u", buffer);
	close(fd);
	return (0);
}
