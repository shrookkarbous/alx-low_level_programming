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
	list_t *next = malloc(sizeof(list_t));

	if (!head || !next)
		return (NULL);
	if (next)
	{
		printf("[%d]%s\n", _strlen(next->str), next->str);
		if (!next->str)
		{
			free(next);
			return (NULL);
		}
	}
	return (next);
}
