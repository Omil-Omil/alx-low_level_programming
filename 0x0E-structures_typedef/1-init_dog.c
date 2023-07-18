#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize variable of type struct dog
 * @d: point to struct dog initialized
 * @name: name that is to be initialized
 * @age: the age to initialize
 * @owner:owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
