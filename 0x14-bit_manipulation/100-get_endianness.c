/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	unsigned int mask;
	char *endian;

	mask = 1;
	endian = (char *)&mask;

	if (*endian == 0)
		return (0);

	return (1);
}
