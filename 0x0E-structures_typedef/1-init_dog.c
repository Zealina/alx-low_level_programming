#include "dog.h"

/**
 * init_dog - Initialize a structure
 * @d: Pointer to the return value
 * @name: name of dog
 * @age: Age of dog
 * @owner: Name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
