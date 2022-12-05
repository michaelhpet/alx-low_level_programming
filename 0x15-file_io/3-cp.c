#include "main.h"

/**
 * main - copies the content of a file to another
 * @argc: arguments' count
 * @argv: arguments' vector
 * Return: 0 (success), non-zero int otherwise
*/
int main(int argc, char *argv[])
{
	int fd0, fd1;
	char *err97, *err98, *err99;

	err97 = "Usage: cp file_from file_to\n";
	err98 = "Error: Can't read from file %s\n";
	err99 = "Error: Can't write to %s\n";

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, err97);
		exit(97);
	}

	fd0 = open(argv[1], O_RDONLY);
	if (fd0 == -1)
	{
		dprintf(STDERR_FILENO, err98, argv[1]);
		exit(98);
	}

	fd1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, err99, argv[2]);
		close_fd(fd0);
		exit(99);
	}

	copy_to(fd0, fd1);
	close_fd(fd0);
	close_fd(fd1);
	return (0);
}

/**
 * copy_to - handler function to copy content of a file to another
 * @in_fd: fd to copy from
 * @out_fd: fd to copy to
 * Return: 1 (success), -1 otherwise
*/
int copy_to(int in_fd, int out_fd)
{
	ssize_t r_count;
	char buffer[1024];

	while ((r_count = read(in_fd, buffer, sizeof(buffer))))
	{
		if ((write(out_fd, buffer, r_count)) != r_count)
			return (1);
	}

	return (-1);
}

/**
 * close_fd - closes a file descriptor
 * @fd: file descriptor
*/
void close_fd(int fd)
{
	int c_ret;
	char *err = "Error: Can't close fd %d\n";

	c_ret = close(fd);
	if (c_ret == -1)
	{
		dprintf(STDERR_FILENO, err, fd);
		exit(100);
	}
}
