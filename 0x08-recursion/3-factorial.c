#include "main.h"
#include <stdio.h>

/**
 * factorial - function returns a factorial of a given number
 * @n: integer
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
