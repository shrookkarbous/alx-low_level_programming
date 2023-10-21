#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to a structure
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node1, list_t *node2;

	if (!head)
		return;
	while (node1->next = node2)
	{
		if (node1->next != node2)
		{
			free(node2);
		}
	}
}
