#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s1 = "Hello";
	char *s2 = "World!";

	printf("strcmp(s1, s2) == %i\n", strcmp(s1, s2));

	return (0);
}
