#include "lists.h"

/**
 * add_nodeint_end - a function that adds a
 * new node at the end of a listint_t list.
 * @head: pointer to struct
 * @n: integer
 * Return:the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node2 = malloc(sizeof(listint_t));
	listint_t *node1;

	if (!head || !node2)
		return (NULL);

	node2->next = NULL;
	node2->n = n;

	if (!*head)
		*head = node2;
	else
	{
		node1 = *head;
		while (node1->next)
			node1 = node1->next;
		node1->next = node2;
	}
	return (node2);
}

