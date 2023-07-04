#include"main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 *
 * @a: for the rows
 *
 * Return: void
*/

void print_chessboard(char (*a)[8])
{
	int inr, imr;

	for (inr = 0; inr < 8; inr++)
	{
		for (imr = 0; imr < 8; imr++)
		{
			putchar(a[inr][imr]);
		}
		putchar('\n');
	}
}
