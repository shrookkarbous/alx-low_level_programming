#include "main.h"

/**
 * _memset - fills memory
 * @s: pointr to a constant
 * @b: constant
 * @n: max bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: array length
 * @size: size of elements
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
