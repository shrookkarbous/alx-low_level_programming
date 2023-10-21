#include "lists.h"

/**
 * _strlen - returns the length of the string
 * @s: the string
 * Return : integer
 */

int _strlen(char *s)
{
	int i = 0;
	*s = str[i];

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


	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", _strlen(h->str), h->str);
		h->next;
		count++;
	}
	return (count);
}
