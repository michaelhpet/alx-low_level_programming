/**
 * _strcpy - copies a string
 * @dest: address of string to copy to
 * @src: address of string to copy from
 * Return: adress of copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
