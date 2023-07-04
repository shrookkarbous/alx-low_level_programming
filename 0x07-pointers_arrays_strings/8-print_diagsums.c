#include"main.h"

/**
 * print_diagsums - a function that prints the sum of the
 *		two diagonals of a square matrix of integers.
 *
 * @a: array of int type
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int inr, s1 = 0, s2 = 0;

	for (inr = 0; inr < size; inr++)
	{
		s1 += a[inr];
		s2 += a[size - inr - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
