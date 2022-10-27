#include "main.h"
#include <stdio.h>

int main(void)
{
	char *n1 = "93012";
	char *n2 = "31901";

	char r[5];
	char *res;

	res = infinite_add(n1, n2, r, 6);

	printf("n1: %s\n", n1);
	printf("n2: %s\n", n2);
	printf("re: %s\n", res);

	return (0);
}
