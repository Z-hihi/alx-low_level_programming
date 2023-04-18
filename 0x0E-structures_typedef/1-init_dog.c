#include "dog.h"
/**
 * init_dog - struct dog to initiliaze
 * @d: struct to init
 * @name: name dog
 * @age: dog age
 * @owner: name the dog
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
