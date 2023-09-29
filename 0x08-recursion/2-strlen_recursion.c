#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function returns the length of the srting
 * @s: pointer to a string
 * Return: int
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s > '\0')
	{
		len += _strlen_recursion(s + 1) + 1;
	}
}
