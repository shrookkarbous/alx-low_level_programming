#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds the positive numbers
 * @argc: the count of the arguments
 * @argv: the value of the arguments
 * Return: 0 Sucess, non 0 itis a failure
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
