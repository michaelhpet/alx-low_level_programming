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

	if (name == NULL || owner == NULL || age < 0)
		exit(EXIT_FAILURE);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		exit(EXIT_FAILURE);

	d_name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (d_name == NULL)
	{
		free(dog);
		exit(EXIT_FAILURE);
	}

	d_owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (d_owner == NULL)
	{
		free(dog);
		exit(EXIT_FAILURE);
	}

	d_name = _strcpy(d_name, name), d_owner = _strcpy(d_owner, owner);

	dog->name = d_name;
	dog->owner = d_owner;
	dog->age = age;

	return (dog);
}

/**
 * _strcpy - copies a string into another
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = _strlen(src);

	for (i = 0; src[i] != 0; i++)
		dest[i] = src[i];

	dest[i] = 0;

	return (dest);
}

/**
 * _strlen - computes the length of a string
 * @s: string
 * Return: length of s
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != 0)
		len++;

	return (len);
}
