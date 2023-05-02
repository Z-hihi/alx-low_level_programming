#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the elements
 * @h: the head node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t k;

	temp = h;
	for (k = 0; temp; k++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (k);
}
