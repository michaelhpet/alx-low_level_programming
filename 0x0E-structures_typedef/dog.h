#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a dog
 * @name: name of dog
 * @owner: name of dog's owner
 * @age: age of dog
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - type definition for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* _DOG_H_ */
