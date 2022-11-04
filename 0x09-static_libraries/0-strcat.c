/**
 * _strcat - concatenates two strings
 * @dest: string to concat into
 * @src: string to concat from
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len_dest, len_src;

	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest++;

	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;

	for (i = 0; i <= len_src; i++)
		dest[i + len_dest] = src[i];

	return (dest);
}
