#include "lists.h"

/**
 * free_listint2 -  free listint
 * @head: Head node.
 * Return: result.
 */

void free_listint2(listint_t **head)
{
	listint_t *tempNode;

	tempNode = *head;
	if (tempNode == NULL)
	{
		return;
	}
	while (tempNode != NULL)
	{
		listint_t *lst;

		lst = tempNode;
		tempNode = tempNode->next;
		free(lst);
	}
	*head = NULL;
}
