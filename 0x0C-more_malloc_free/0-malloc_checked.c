#include "main.h"
/**
 * malloc_checked - alocate memory using malloc
 * @b: unsigned int
 * Return: pointer to array
 */
void *malloc_checked(unsigned int b)
{
	int *array = malloc(b);

	if (array == 0)
		exit(98);
	return (array);
}
