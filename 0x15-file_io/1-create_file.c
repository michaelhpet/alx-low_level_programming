#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: string to write to file
 * Return: 1 on success, -1 otherwise
*/
int create_file(const char *filename, char *text_content)
{
	int fd, w_count;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w_count = write_to_file(fd, text_content);
	if (w_count == -1)
		return (-1);

	return (1);
}

/**
 * write_to_file - writes to a file
 * @fd: file descriptor
 * @s: string to write
 * Return: write (2) return value
*/
int write_to_file(int fd, char *s)
{
	unsigned int len;

	len = _strlen(s);
	return (write(fd, s, len));
}

/**
 * _strlen - computes the length of a string
 * @s: string
 * Return: length of s
*/
unsigned int _strlen(char *s)
{
	unsigned int len;

	len = 0;
	while (s[len])
		len++;

	return (len);
}
