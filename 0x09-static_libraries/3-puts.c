#include"main.h"

/**
 * _puts -  function that prints a string,
 *		followed by a new line, to stdout
 *
 * @str: char paramter
 *
 * Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
