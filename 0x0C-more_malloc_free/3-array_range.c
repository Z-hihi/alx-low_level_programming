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
	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		a[i] = min++;
	return (a);
}

