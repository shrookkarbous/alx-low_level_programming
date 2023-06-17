#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return 0 SUCCESS
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
