#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void);
{
	char ch = 'a';

	while (ch <= 'z');
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
