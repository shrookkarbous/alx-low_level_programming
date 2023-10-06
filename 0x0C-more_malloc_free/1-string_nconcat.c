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
	int r, m, sl1, sl2;

	/*check if the string passed is NULL*/

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	/*calculate the length of the string*/

	for (sl1 = 0; s1[sl1] != '\0'; sl1++)
		;

	for (sl2 = 0; s2[sl2] != '\0'; sl2++)
		;

	/*memory reservation*/
	c = malloc(sl1 + n + 1);
	if (c == NULL)
	{
		return (NULL);
	}

	/*copy first string to c*/
	for (r = 0; s1[r] != '\0'; r++)
		c[r] = s1[r];

	/*copy second string to c*/
	for (m = 0; m < n; m++)
	{
		c[r] = s2[m];
		r++;
	}

	c[r] = s2[m];
	r++;
}

