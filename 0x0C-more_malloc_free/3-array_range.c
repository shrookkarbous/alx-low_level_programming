#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: integer
 * @max: integer
 * Return: int
 */

int *array_range(int min, int max)
{
	int n, m;
	int *ptr;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	ptr = malloc(sizeof(int) * n);
	if (!ptr)
		return (NULL);
	for (m = 0; m < n; m++)
		ptr[m] = min++;
	return (ptr);
}
