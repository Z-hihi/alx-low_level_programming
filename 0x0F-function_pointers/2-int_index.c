#include "function_pointers.h"
/**
 * int_index - searche for integer
 * @array: array of int
 * @size: the array size
 * @cmp: compare function
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k = 0;

	if (array && size && cmp)
		while (k < size)
		{
			if (cmp(array[k]))
				return (k);
			k++;
		}
	return (-1);
}

