#include "lists.h"

/**
 * list_len - return the number of elements
 * @h: struct
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
