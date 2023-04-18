#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct dog
 * @age: age the dog
 * @name: name the dog
 * @owner: owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
