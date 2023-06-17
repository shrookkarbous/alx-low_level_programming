#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabets in lowercases and uppercases
 *
 * Return: 0 Success
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints A - Z*/
	while (CH <= Z)
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
