/**
 * swap - swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
