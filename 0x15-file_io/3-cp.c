#include "main.h"

/**
 * main - copies the content of a file to another
 * @argc: arguments' count
 * @argv: arguments' vector
 * Return: 0 (success), non-zero int otherwise
*/
int main(int argc, char *argv[])
{
	int fd0, fd1, r_count;
	char buffer[1024];

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
	fd1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((r_count = read(fd0, buffer, sizeof(buffer))))
	{
		if (write(fd1, buffer, r_count) != r_count || fd1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	if (close(fd0) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd0);
		exit(100);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	return (0);
}
