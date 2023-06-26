#include"main.h"

/**
 * print_rev -  a function that prints a string,
 *		in reverse, followed by a new line
 *
 * @s: char paramter
 *
 * Return: void
*/

void print_rev(char *s)
{
	while (*s != '\0')
	{
		putchar(*s - 0);
		s--;
	}
	putchar('\n');
}
