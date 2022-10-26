/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string
 * Return: pointer to s
 */

char *string_toupper(char *s)
{
	int i, s_len;

	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;

	for (i = 0; i < s_len; i++)
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] -= 32;
	}

	return (s);
}
