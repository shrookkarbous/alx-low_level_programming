#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: unsigned integer
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *r = malloc(b);

	if (r == 0)
		exit(98);

	return (r);
}
