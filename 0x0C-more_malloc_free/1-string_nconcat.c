#include "main.h"

/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: pointer to string
 * @s2: pointer to a string
 * @n: unsigned integer
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int r, m, sl1, sl2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (sl1 = 0; s1[sl1] != '\0'; sl1++)
		;

	for (sl2 = 0; s2[sl2] != '\0'; sl2++)
		;

	c = malloc(sl1 + n + 1);
	if (c == NULL)
	{
		return (NULL);
	}

	for (r = 0; s1[r] != '\0'; r++)
		c[r] = s1[r];

	for (m = 0; m < n; m++)
	{
		c[r] = s2[m];
		r++;
	}

	c[r] = s2[m];
	r++;
}

