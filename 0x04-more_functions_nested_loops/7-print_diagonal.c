#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 *
 * @n: takes inputs
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= posten; space++)
				-putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
