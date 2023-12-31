#include "dog.h"

/**
 * init_dog - initialize dog
 * @d: the dog to be intialized
 * @name: string dog name
 * @age: integer dog age
 * @owner: string owner name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
