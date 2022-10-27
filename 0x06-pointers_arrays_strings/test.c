#include <stdio.h>
#include <string.h>

int main(void)
{
	unsigned int i;
	char *s1 = "Hello";
	char *s2 = "World!";

	i = 0;
	while (s1[i] != '\0')
		i++;

	printf("length of %s is %d\n", s1, i);

	return (0);
}
