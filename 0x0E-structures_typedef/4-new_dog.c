#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age f dog
 * @owner: owner of dog
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, k;
	 dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog =  malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	i++;
	dog->name = malloc(i + 1);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		dog->name[k] = name[k];
	dog->age = age;
	for (j = 0; owner[j]; j++)
		;
	j++;
	dog->owner = malloc(j + 1);
	if (dog->owner== NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
		dog->owner[k] = owner[k];
	return (dog);
}
