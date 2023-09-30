#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - a function that returns 1 if
 * a string is a palindrome and 0 if not.
 * @s: pointer to a string
 * Return: int
 */

int search(char *s, int begain, int end, int mod);
int last_index(char *s);

int last_index(char *s)
{
	int n = 0;
	
	if (s* > '\0')
		n += last_index(s+1) + 1;

	return (n);
}

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (search(s, 0, end - 1, end % 2));
}

/**
 * search - function searching the plaindrom
 * @*s: pointer to a string
 * @begain: int the bagaining
 * @end: int the end
 * @mod: int
 * Return: 0 or 1
 */

int search(char *s, int begain, int end, int mod)
{
	if ((begain == end && mod != 0) || (begain == end + 1 && mod == 0))
		return (1);
	else if (s[begain] != s[end])
		return (0);
	else
		return (search(s, begain + 1, end - 1, mod);
}
