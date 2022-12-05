/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: string to write to file
 * Return: 1 on success, -1 otherwise
*/
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY);
	if (fd)
	{
		while (text_content++)
			write(fd, text_content, 1);

		close(fd);
		return (0)
	}

	fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	while (text_content++)
		write(fd, text_content, 1);

	return (1)
}
