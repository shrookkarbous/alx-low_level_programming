#include "main.h"
#include<stdio.h>

/**
 * is_prime_number -  a function that returns 1 if
 * the input integer is a prime number, otherwise return 0
 * @n: integer
 * @m: integer
 * Return: int
 */

int priming(int n, int m);
int is_prime_number(int n)
{
	return (priming(n, 2));
}

/**
 * priming - is a function that check prim number
 * @n: integer
 * @m: integer
 * Return: int
 */

int priming(int n, int m)
{
	if (m >= n && n > 1)
		return (1);
	else if (n % m == 0 || n <= 1)
		return (0);
	else
		return (priming(n, m + 1));
}
