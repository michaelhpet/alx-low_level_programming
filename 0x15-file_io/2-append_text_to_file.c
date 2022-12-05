#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file
 * @text_content: string to append
 * Return: 1 on success, -1 otherwise
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND);
	if (fd)
	{
		if (text_content)
		{
			w_count = write_to_file(fd, text_content);
			if (w_count == -1)
			{
				close(fd);
				return (-1);
			}
		}

		return (1);
	}

	return (-1);
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
