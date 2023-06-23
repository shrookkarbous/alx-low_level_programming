#include"main.h"

/**
 * main - print number 1 - 100 followed by a new line
 *		numbers that are multiple of 3 prints Fizz
 *		numbers that are multiple of 5 prints Buzz
 *		number that are multiple of 3 and 5 prints FizzBuzz
 *		each number and word to be separated by space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
