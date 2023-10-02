#include"main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: pointer to string
 *
 * @accept: for the bytes
 *
 * Return: Always unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int lnr, lmr;

	for (lnr = 0; s[lnr] != '\0'; lnr++)
	{
		for (lmr = 0; accept[lmr] != s[lnr]; lmr++)
		{
			if (accept[lmr] == '\0')
				return (lnr);
		}
	}
	return (lnr);
}
