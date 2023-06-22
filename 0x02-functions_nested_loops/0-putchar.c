#include "main.h"

/**
 * main - Entry point
 *
 * Description: A Program that print _putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char me[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(me[ch]);
	_putchar('\n');
	return (0);
}
