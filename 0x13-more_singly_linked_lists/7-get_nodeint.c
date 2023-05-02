#include "lists.h"

/**
 * get_nodeint_at_index -  returns the index node
 * @head: head node
 * @index: the index of the node
 * Return: Node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	if (head == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < index; k++)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
	}
	return (head);
}
