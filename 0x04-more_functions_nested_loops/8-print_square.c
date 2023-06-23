#include "main.h"

/**
 * print_square - a function that prints a square, using charcter #.
 *
 * @size: takes inputs is the size of the square
 *
*/

void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
