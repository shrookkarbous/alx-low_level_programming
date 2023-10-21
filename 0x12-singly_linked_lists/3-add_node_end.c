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

	if (!head || !after)
		return (NULL);
	if (after)
	{
		printf("[%d]%s\n", _strlen(after->str), after->str);
		if (!after->str)
		{
			free(after);
			return (NULL);
		}
	}
	head->next = *after;
	return (after);
}
