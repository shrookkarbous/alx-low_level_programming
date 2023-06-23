#include "main.h"

/**
 * print_sign - a function that prints the
 *		sign of the numbers
 *
 * @n: takes the input of the function
 *
 * Return: 1 (if the number greater than 0)
 *		0 (if number is 0)
 *		-1 9if number is negative)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	else
	{
		_putchar(45);
		return (-1);
	}

}
