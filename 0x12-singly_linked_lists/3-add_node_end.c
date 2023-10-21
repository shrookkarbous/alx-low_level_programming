#include "lists.h"

/**
 * add_node_end -  a function that adds a new
 * node at the end of a list_t list.
 * @head: pointer to list_t struct
 * @str: pointer to a string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *after = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !after)
		return (NULL);
	if (str)
	{
		after->str = strdup(str)
		if (!after->str)
		{
			free(after);
			return (NULL);
		}
		after->len = _strlen(after->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = *after;
	}
	else
		*head = after;
	return (after);
}

