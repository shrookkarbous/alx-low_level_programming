#include "lists.h"
#include <stddef.h>

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer to the elements of list_t
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	char *str;
	size_t count = 0;
	list_t *next;
	next = &h;


	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", count, h->str);
		h->next;
		count++;
	}
	return (count);
}
