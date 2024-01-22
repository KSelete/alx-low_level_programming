#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog to be initialized
 * @name: name to be used for initialization
 * @age: Age to be used for initialization
 * @owner: Owner's name to be used for initialization
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog);
				d->name =name;
				d->age =age;
				d->owner = owner;
				}
