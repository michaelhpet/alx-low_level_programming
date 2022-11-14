#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *d_name, *d_owner;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		exit(EXIT_FAILURE);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		exit(EXIT_FAILURE);

	d_name = name, d_owner = owner;

	dog->name = d_name;
	dog->age = d_owner;
	dog->age = age;

	return (dog);
}
