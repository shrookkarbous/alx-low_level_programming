#include "main.h"

/**
 * _isupper -  a function that checks for uppercase character.
 *
 * @c: input for alphabets
 *
 * Return:1 if itis uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
