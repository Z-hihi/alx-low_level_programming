#include "main.h"
/**
 * array_range - create an array of integer
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to an array
 */
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));

	for (i = 0; i < (max - min + 1); i++)
		a[i] = min + i;
	return (a);
}

