#include <stdio.h>

/**
 * main - prints the number of the arguments
 * @argc: count of arguments
 * @argv: value of arguments
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
