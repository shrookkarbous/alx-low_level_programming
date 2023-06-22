#include"main.h"

/**
 * print_alphabet_x10 - utelizes _putchar function to print
 *		the alphabets 10 times
*/

void print_alphabet_x10(void)
{
	int ch;
	int line;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch ++)
			_putchar(ch);
		_putchar('\n');
	}
}
