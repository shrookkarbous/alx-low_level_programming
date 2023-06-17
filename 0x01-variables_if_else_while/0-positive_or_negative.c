#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: true or false validation
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i n is positive\n", n);
	else if (n == 0)
		printf("%i n is zero\n", n);
	else
		printf("%i n is negative\n", n);
	return (0);
}
