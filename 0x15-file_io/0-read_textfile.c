#include "main.h"

/**
 * read_textfile - reads and prints out a text file
 * @filename: name of file
 * @letters: number of letters to print
 * Return: number of characters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r_count, w_count;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	r_count = read(fd, buf, letters);
	w_count = write(STDOUT_FILENO, buf, r_count);
	if (r_count == -1 || w_count == -1 || (r_count != w_count))
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (w_count);
}
