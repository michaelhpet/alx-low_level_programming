/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int i, j;

	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i] == separators[j] && s[i + 1] != '\0')
			{
				if (s[i + 1] > 97 && s[i + 1] < 123)
					s[i + 1] -= 32;
			}
		}
	}

	return (s);
}
