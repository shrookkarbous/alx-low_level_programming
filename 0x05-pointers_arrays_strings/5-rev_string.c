#includ"main.h"

/**
 * rev_string -  a function that reverses a string.
 *
 * @s: char paramter
 *
 * Return: void
*/

void rev_string(char *s)
{
	int n;
	int x;
	char count;

	for (n = 0; s[n] != '\0'; n++)
		;

	for (x = 0; x < n / 2; x++)
	{
		count = s[x];
		s[x] = s[n - 1 - x];
		s[n - 1 - x] = count;
	}
}
