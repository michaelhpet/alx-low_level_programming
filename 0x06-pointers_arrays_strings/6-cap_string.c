/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int i, j, s_len;

	int separators[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	int separators_len = 13;

	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;

	for (i = 0; i < s_len; i++)
	{
		for (j = 0; j < separators_len; j++)
		{
			if (s[i] == separators[j])
			{
				if (s[i + 1] > 97 && s[i + 1] < 123)
					s[i + 1] -= 32;
			}

			if (s[i] == 9)
				s[i] = 32;
		}
	}

	return (s);
}
