#include "main.h"

/**
 * _strlen - find the size of the string
 * @s: pointer to a string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}


/**
 * str_concat - a function that concatenates two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: string on Success, Null in failure
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, n;
	char *c;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	c = malloc((size1 + size2) * sizeof(char) + 1);
	if (c == 0)
		return (0);

	for (n = 0; n <= size1 + size2; n++)
	{
		if (n < size1)
			c[n] = s1[n];
		else
			c[n] = s2[n - size1];
	}
	c[n] = '\0';
	return (c);
}
