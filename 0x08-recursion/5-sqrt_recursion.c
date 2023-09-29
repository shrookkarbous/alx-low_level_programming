#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: integer
 * Return: int
 */

int squaring(int n, int base);
int _sqrt_recursion(int n)
{
	return (squaring(n, 1));
}

/**
 * squaring - function that knows the square
 * @n: integer
 * @base: integer
 * Return: int
 */

int squaring(int n, int base)
{
	if ((base * base) == n)
		return (base);
	else if ((base * base) < n)
		return (squaring(n, base + 1));
	else
		return (-1);
}

