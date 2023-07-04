#include"main.h"

/**
 * _memset -  a function that fills memory with a constant byte
 *
 * @s: pointer for the constant
 *
 * @b: constant
 *
 * @n: maximum bytes to be used
 *
 * Return: Always Pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; n > 0; l++, n--)
	{
		s[l] = b;
	}

	return (s);
}
