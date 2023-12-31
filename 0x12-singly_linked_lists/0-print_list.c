#include "lists.h"

/**
 * _strlen - returns the length of the string
 * @s: the string
 * Return : integer
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer to the elements of list_t
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}
