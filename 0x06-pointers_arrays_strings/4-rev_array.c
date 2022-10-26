/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: length of a
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
