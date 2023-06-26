#include"main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: is a char paramter
 *
 * Return: the length of string
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}

