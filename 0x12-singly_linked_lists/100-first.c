#include <stdio.h>

/**
 * first - startup function that runs before main
*/

__attribute__ ((constructor))
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
