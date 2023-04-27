#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free list
 * @head: a pointer
 */
void free_list(list_t *head)
{
	list_t *lst;

	while (head)
	{
		lst = head->next;
		free(head->str);
		free(head);
		head = lst;
	}
}

