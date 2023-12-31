#include"main.h"

/**
 * times_table - a function that prints the 9 times table,
 *		starting with 0
 *
 * Example Table
 * 0, 0, 0, 0,i...
 * 0, 1, 2, 3,...
*/

void times_table(void)
{
	int num;
	int multi;
	int prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (multi = 1; multi <= 9; multi++)
		{
			putchar(',');
			putchar(' ');

			prod = num * multi;

			/*
			 * put space if product is a single number
			 * place the first digit if its two numbers
			*/
			if (prod <= 9)
			{
				_putchar(' ');
			} else if
			{
				_putchar((prod / 10) + 48); /*get the first digit*/
				_putchar((prod % 10) + 48); /*get the second digit*/
			}
		}
		_putchar('\n');
	}
}
