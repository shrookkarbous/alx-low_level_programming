#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 *
 * @n: is the number of times the \ charcter
 *		should beprinted
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
			-putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
}
