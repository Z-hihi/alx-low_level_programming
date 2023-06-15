#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: a pointer to the starting node
 * @index: the index of the node
 * Return: the address
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head->prev)
		head = head->prev;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
