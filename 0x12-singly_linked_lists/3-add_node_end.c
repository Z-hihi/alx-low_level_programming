#include "lists.h"

/**
 * add_node_end - add nod
 * @head: a double pointer
 * @str: the string
 * Return: a pointer to the newly created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup_str;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	dup_str = strdup(str);
	if (!str)
	{
		free(new);
		return (NULL);
	}

	new->str = dup_str;
	new->len = _strlen(str);
	new->next = NULL;

	if (!*head)
		*head = new;

	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}

	return (*head);
}

/**
 * _strlen - returns the length
 * @s: the string
 * Return: the length of string
 */
int _strlen(const char *s)
{
	int k = 0;

	while (*s++)
		k++;
	return (k);
}
