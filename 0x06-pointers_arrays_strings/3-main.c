#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Okay";
    char s2[] = "Okay!";

    printf("_strcmp - %d\n", _strcmp(s1, s2));
    printf("strcmp - %d\n", strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
