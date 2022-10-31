/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to search
 * @accept: token to search for
 * Return: pointer to byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (0);
}
