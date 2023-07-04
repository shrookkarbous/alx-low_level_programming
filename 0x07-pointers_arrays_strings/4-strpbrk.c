#include"main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: pointer for string
 *
 * @accept: a string to be matched
 *
 * Return: a pointer to the byte in s that matches
 *		one of the bytes in accept,
 *		or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int lnr, lmr;
	char *c;

	lnr = 0;
	while (s[lnr] != '\0')
	{
		lmr = 0;
		while (accept[lmr] != '\0')
		{
			if (accept[lmr] == s[lnr])
			{
				c = &s[lnr];
				return (c);
			}
			lmr++;
		}
		lnr++;
	}
	return (0);
}
