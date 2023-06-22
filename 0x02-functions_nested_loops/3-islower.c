#include"main.h"
#include<islower>

/**
 * _islower - function that checks for lowercase character
 *
 * @c: checks input of function
 *
 * Return: 1 (if `c` is lower case)
 *		otherwise always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
