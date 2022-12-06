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

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd0 = open(argv[1], O_RDONLY);
	if (fd0 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd1 = open(argv[2], O_WRONLY | O_APPEND | O_CREAT | O_TRUNC, 0664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		_close_fd(fd0);
		exit(99);
	}

	_copy_to(fd0, fd1);
	_close_fd(fd0);
	_close_fd(fd1);
	return (0);
}

/**
 * _copy_to - handler function to copy content of a file to another
 * @in_fd: fd to copy from
 * @out_fd: fd to copy to
 * Return: 1 (success), -1 otherwise
*/
int _copy_to(int in_fd, int out_fd)
{
	ssize_t r_count;
	char buffer[1024];

	while ((r_count = read(in_fd, buffer, sizeof(buffer))))
	{
		write(out_fd, buffer, r_count);
	}

	return (-1);
}

/**
 * _close_fd - closes a file descriptor
 * @fd: file descriptor
*/
void _close_fd(int fd)
{
	int c_ret;

	c_ret = close(fd);
	if (c_ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
