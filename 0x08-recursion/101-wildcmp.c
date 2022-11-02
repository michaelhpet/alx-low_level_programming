/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if s1 and s2 can be considered equal, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);

	if (*s1 == 0 && *s2 == 42 && *(s2 + 1) != 0)
		return (0);

	if (*s2 == 42)
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	if (*s1 != *s2)
		return (0);

	return (wildcmp(s1 + 1, s2 + 1));
}
