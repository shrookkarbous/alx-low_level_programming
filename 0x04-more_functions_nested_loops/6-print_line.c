#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 *
 * @n: the number of times the charcter should be printed
*/

void print_line(int n)
{
	int LnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (LnChr = 1; LnChr <= n; LnChr++)
			_putchar('_');
		_putchar('\n');
	}
}
