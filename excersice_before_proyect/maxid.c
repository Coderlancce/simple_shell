#include <unistd.h>

/**
 *
 */

int main()
{
	int fd, n_read, n_dir;
	char *buf;

	n_dir = chdir(/proc/sys/kernel/pid_max);
	if (n_dir == -1)
		return (-1);

	buf = malloc(sizeof(char) * 10);

	fd = open(pid_max, RDONLY)
	if (fd == -1)
	{
		free (buf);
		return (-1);
	}
	n_read = read(fd, buf, 10);
	if (n_read == -1)
	{
		free(buf);
		close(fd);
		return (-1);
	}
	printf("%u", buf);
	close(fd);
	return (0);
}
