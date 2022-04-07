#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 *
 */

int main(int argc, char *argv[])
{
	int fd, n_read, n_dir;
	char *buffer;

	n_dir = chdir("/proc/sys/kernel");
	if (n_dir == -1)
		return (-1);

	buffer = malloc(sizeof(char) * 10);
	if (buffer == NULL)
		return (-1);

	fd = open(argv[1], O_RDONLY);
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
	printf("%s", buffer);
	close(fd);
	return (0);
}
