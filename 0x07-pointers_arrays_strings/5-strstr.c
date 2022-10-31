/**
 * _strstr - locates a subsctring
 * @haystack: base string to parse
 * @needle: substring to find
 * Return: pointer to beginning of located subsctring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == 0)
		return (haystack);

	for (i = 0; haystack[i] != 0; i++)
	{
		for (j = 0; needle[j] != 0; j++)
		{
			if (haystack[i + j] != needle[j])
				break;

			if (needle[j + 1] == 0)
				return (haystack + i);
		}
	}

	return (0);
}
