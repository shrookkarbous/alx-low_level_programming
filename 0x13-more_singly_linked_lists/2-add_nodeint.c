#include "lists.h"

/**
 * add_nodeint - a function that adds a node
 * @head: pointer to a node
 * @n: integer
 * Return: the address of the new elements
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *front = malloc(sizeof(listint_t));

	front->n = n;
	front->next = head;

	if (front->next != head)
	{
		free(front);
		return (NULL);
	}
	else if
	{
		front->n = n;
		front->next = head;
	}
	return (front);
}
