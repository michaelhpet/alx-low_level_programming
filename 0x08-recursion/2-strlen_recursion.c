/**
 * _strlen_recursion - returns the length of a string
 * @s: string which length to return
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	if (*(s + 1) == 0)
		return (1);

	return (1 + _strlen_recursion(s + 1));
}
