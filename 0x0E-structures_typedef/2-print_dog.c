#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");

		if (d->age < 0)
			puts("Age: (nil)");
		else
			printf("Age: %f\n", d->age);

		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
