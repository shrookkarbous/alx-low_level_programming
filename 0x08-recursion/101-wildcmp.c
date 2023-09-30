#include "mian.h"
#include <stdio.h>

char *move_me(char *s2);
int magic(char *s1, char *s2);


/**
 * move_me - iterate past asterik
 * @s2: the second srting
 * Return: char
 */

char *move_me(char *s2)
{
	if (*s2 == '*')
		return (move_me(s2 + 1));
	else
		return (s2);
}

/**
 * magic - makes magic a reality
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: 1 if identical, 0 if false
 */

int magic(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += magic(s1 + 1, s2 + 1);
	return (ret);
}

/**
 * wildcmp - a function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: 1 if identical, 0 if false
 */

int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*move_me(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_me(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += magic(s1, s2);
		return (!!ret);
	}
	return (0);
}
