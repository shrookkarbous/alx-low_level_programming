#include "main.h"

/**
 * _abs - a function that computes th absolute value
 *		of an integer
 *
 * @n: takes the input for function
 *
 * Return: Always n
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
