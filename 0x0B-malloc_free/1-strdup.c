#include "main.h"

/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: pointer to a string
 * Return: on Success returns a pointer to the duplicated string
 * or returns NULL if str = NULL
 */

char *_strdup(char *str)
{
	int n = 0, size = 0;
	char *c;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	/*+1 on the size puts the end of the string*/
	c = malloc(size * sizeof(*str) + 1);

	if (c == 0)
	{
		return (NULL);
	}
	else
	{
		for (; n < size; n++)
			c[n] = str[n];
	}
	return (c);
}
