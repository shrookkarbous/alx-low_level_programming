#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list.
 * @h: pointer to a stucture
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		if (h->n != NULL)
			h = h->next;
		m++;
	}
	return (m);
}
