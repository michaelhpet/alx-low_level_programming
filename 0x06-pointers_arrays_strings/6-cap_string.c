/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int i, j;

	int separators[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	int separators_len = 13;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < separators_len; j++)
		{
			if (s[i] == separators[j])
			{
				if (s[i + 1] > 97 && s[i + 1] < 123)
					s[i + 1] -= 32;
			}
		}
	}

	return (s);
}
