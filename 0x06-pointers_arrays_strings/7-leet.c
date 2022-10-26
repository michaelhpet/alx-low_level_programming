/**
 * leet - encodes a string to 1337
 * @s: string to encode
 * Return: pointer to s
 */

char *leet(char *s)
{
	int i, j;

	int tokens[] = {65, 69, 79, 84, 76};
	int repl[] = {4, 3, 0, 7, 1};
	int tokens_len = 5;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < tokens_len; j++)
		{
			if (s[i] == tokens[j] || s[i] == tokens[j] + 32)
				s[i] = repl[j] + 48;
		}
	}

	return (s);
}
