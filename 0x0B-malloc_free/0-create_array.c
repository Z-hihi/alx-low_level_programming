#include "main.h"
/**
 * create_array - create an array of char
 * @c: char to initialize
 * @size: number of bytes  t allocate
 * Return: a pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
