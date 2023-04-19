#include "function_pointers.h"
/**
 * array_iterator - map an array
 * @array: int array
 * @size: size of array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *len = array + size - 1;

	if (array && size && action)
		while (array <= len)
			action(*array++);
}
