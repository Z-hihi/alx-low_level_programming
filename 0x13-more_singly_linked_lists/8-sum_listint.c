#include "lists.h"

/**
 * sum_listint - sums all data of list
 * @head: the pointer to the head node
 * Return: the sum of all the data of the listint_t list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
