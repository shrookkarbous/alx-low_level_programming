#include"main.h"

/**
 * prints alphabets - utalizes on  the putchar function to print
 *		the a;phabets a - z
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
