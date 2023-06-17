#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: validation of true or fals
 *
 * Return 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 6)
		printf("Last digit of n is %i and and is less than 6 and not 0\n", n);
	else if (n == 0)
		printf("Last digit of n is %i and and is 0\n", n);
	else
		printf("Last digit of n is %i and is greater than 5\n", n);
	return (0);
}
