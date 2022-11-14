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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */