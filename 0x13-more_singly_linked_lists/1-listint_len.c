#include "lists.h"

/**
 * listint_len - count the number of elements
 * @h: head node
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t k;

	temp = h;
	for (k = 0; temp; k++)
	{
		temp = temp->next;
	}
	return (k);
}
