#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints the alphabet in lowercase
 *		except 'q' and 'e'
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char x = 'a';

	while (x <= 'a')
	{
		if (x == 'q' || x == 'e')
			x++;
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
