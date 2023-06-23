#include "main.h"

/**
 * print_last_digit - a function that print
 *		the last digit of a number
 *
 * @n: takes the number input of the function
 *
 * Return: lastdigit
*/

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
