/**
 * _strncpy - copies a string
 * @dest: string (pointer) to copy into
 * @src: string to copy from
 * @n: number of characters in src to copy
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, len_src;

	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

		if (i > len_src)
			dest[i] = '\0';
	}

	return (dest);
}
