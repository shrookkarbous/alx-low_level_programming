#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer to struct
 * @str: pointer to a string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *befor = malloc(sizeof(list_t));

	if (!head || !befor)
		return (NULL);

	if (str)
	{
		befor->str = strdup(str);
		if (!befor->str)
		{
			free(befor);
			return (NULL);
		}
		befor->len = _strlen(befor->str);
	}

	befor->next = *head;
	*head = befor;
	return (befor);
}
