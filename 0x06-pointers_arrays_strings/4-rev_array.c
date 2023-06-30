#include"main.h"

/**
 * reverse_array - a function that reverses the
 *		content of an array of integers
 *
 * @a: an array of integer takes inputs
 * @n: the number of element to swap takes inputs
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i, t, j;

	for (i = 0; j = (n - 1); i < j; i++; j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
