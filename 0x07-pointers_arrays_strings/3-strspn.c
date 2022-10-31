/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: 
 * Return: number of bytes in the initial segment of s
 * which consist of only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count;

	count = 0;
	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == accept[i])
			count++;
		else
			break;
	}

	return (count);
}
