#include <stdio.h>

void main(void)
{
	int n = 98;

	char *n_string = (*char)n "\0";

	printf("%s", n_string);
}
