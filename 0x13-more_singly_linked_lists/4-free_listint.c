#include "lists.h"

/**
 * free_listint - free list
 * @head: head node
 * Return: result
 */

void free_listint(listint_t *head)
{
	listint_t *tempNode;

	while (head)
	{
		tempNode = head;
		head = head->next;
		free(tempNode);
	}
}
