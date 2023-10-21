#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to a structure
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node;

	if (head->next != node)
	{
		free(node);
	}
}
