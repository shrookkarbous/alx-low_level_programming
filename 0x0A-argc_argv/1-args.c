#include "stdio.h"

/**
 * main - prints number of arguments
 * @argc: the count of arguments
 * @argv: pointer to an array of arrguments
 * Return: 0 Success, non = fail
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
