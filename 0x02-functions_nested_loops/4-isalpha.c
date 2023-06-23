#include "main.h"

/**
 * _isalpha - checks if character is a letter
 *		both lower and upper cases
 *
 * @c: takes input from other functions
 *
 * Return: 1 if c is true else 0
*/

int _isalpha(int c)
{
	for (int c >= 97; c <= 122; c >= 65; c <= 90; c++)
		return (1);
	return (0);
}
