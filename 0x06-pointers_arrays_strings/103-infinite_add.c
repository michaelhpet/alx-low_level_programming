/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result into
 * @size_r: size of r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *tmp;
	int i, n1_len, n2_len, n_diff;

	n1_len = 0;
	while (n1[n1_len] != '\0')
		n1_len++;

	n2_len = 0;
	while (n2[n2_len] != '\0')
		n2_len++;

	if (n1_len > n2_len)
	{
		for (i = 0; i < (n1_len - n2_len); i++)
			n2[n2_len + i] = 48;
		n2[n2_len + i] = '\0';
	}
	else if (n2_len > n1_len)
	{
		for (i = 0; i < (n2_len - n1_len); i++)
			n1[n1_len + i] = 48;
		n1[n1_len + i] = '\0';
	}
}

/**
 * char_len - computes the length of a string
 * @s: string
 * Return: length of s
 */

unsigned int char_len(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}
