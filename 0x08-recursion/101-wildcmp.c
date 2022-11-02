/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if s1 and s2 can be considered equal, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	int s1_len, s2_len;

	if (*s1 == 0 & *s2 == 0)
		return (1);

	s1_len = _strlen(s1), s2_len = _strlen(s2);
	return (compare(s1, s1_len, s2, s2_len));
}

/**
 * compare - compares two strings
 * s1: first string
 * s1_len: length of s1
 * s2: second string
 * s2_len: length of s2
 * Return: 1 if s1 and s2 can be considered equal, 0 otherwise
 */

int compare(char *s1, int s1_len, char *s2, int s2_len)
{
	char *s1_last, s2_last;

	if (*s1 == 0 || *s2 == 0)
		return (1);

	if (*s1 != *s2 && *s2 != 42)
		return (0);

	s1_last = s1 + (s1_len - 1);
	s2_last = s2 + (s2_len - 1);

	if (*s1_last != *s2_last && *s2_last != 42)
		return (0);

	s1 = *s1 == 42 ? s1 : s1 + 1;
	s1_len = *s1 == 42 ? s1_len : s1_len - 1;

	s2 = *s2 == 42 ? s2 : s2 + 1;
	s2_len = *s2 == 42 ? s2_len : s2_len - 1;

	return (compare(s1, s1_len, s2, s2_len));
}

/**
 * _strlen - returns the length of a string
 * @s: string which length to return
 * Return: length of s
 */

int _strlen(char *s)
{
        if (*s == 0)
                return (0);

        if (*(s + 1) == 0)
                return (1);

        return (1 + _strlen(s + 1));
}
