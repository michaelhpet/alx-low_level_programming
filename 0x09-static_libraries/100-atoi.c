/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: integer type of s
 */

int _atoi(char *s)
{
	int i, len, sign;
	unsigned int n;

	len = 0;
	while (s[len] != '\0')
		len++;

	n = 0;
	sign = 1;
	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if ((int)s[i] > 47 && (int)s[i] < 58)
		{
			n = (n * 10) + ((unsigned int)s[i] - 48);

			if ((int)s[i + 1] < 48 || (int)s[i + 1] > 57)
				break;
		}
	}

	return (n * sign);
}
