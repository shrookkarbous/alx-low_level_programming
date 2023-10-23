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
	listint_t *end = malloc(sizeof(listint_t));

	if (!head || !end)
		return (NULL);


	end->next = NULL;
	end->n = n;

	if (!*head)
	{
		*head = end;
		head->next = end;
		end->n = n;
	}
	return (end);
}

