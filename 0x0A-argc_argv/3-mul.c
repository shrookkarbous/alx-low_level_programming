#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers then prints the sum
 * @argc: integer
 * @argv: the value of argument
 * Return: 0 Sucess, non 0 is faliure
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
