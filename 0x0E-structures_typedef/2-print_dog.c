#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		puts("Name: (nil)");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		puts("Age: (nil)");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		puts("Owner: (nil)");
	else
		printf("owner: %s\n", d->owner);
}
