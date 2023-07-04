#include"main.h"

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: a pointer
 *
 * @c: acts like constant
 *
 * Return: Always to s
*/

char *_strchr(char *s, char c)
{
	int lnr;

	for (lnr = 0; s[lnr] >= '\0' ; lnr++)
	{
		if (s[lnr] == c)
		{
		return (s + lnr);
		}
	}
	return ('\0');
}
