/**
 * _strncat - concatenates two strings
 * @dest: string to concat into
 * @src: string to concat from
 * @n: number of characters to concat from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len_dest;

	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest++;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
		dest[i + len_dest] = src[i];

	dest[i + len_dest] = '\0';

	return (dest);
}
