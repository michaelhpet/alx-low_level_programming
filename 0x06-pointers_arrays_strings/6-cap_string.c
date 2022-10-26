/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int i, j;

	char seps[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; seps[j] != '\0'; j++)
		{
		if (i == 0 || s[i - 1] == seps[j])
		{
			if (s[i] > 97 && s[i] < 123)
				s[i] -= 32;
		}
		}
	}

	return (s);
}
