#include "dog.h"
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
		
		if (d->age != NULL)
			puts("Age: (nil)");
		else
			prinft("Age: %f\n", d->age);

		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
