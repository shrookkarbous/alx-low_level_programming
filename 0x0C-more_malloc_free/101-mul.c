#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str : pointer to a string
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi: a function that converts  a string to integer
 * @s: a pointer char type string
 * Return: a converted integer
*/

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, first_num, i;

	for (first_num = 0; !(s[first_num] >= 48 && s[first_num] <= 57); first_num++)
	{
		if (s[first_num] == '-')
		{
			sign *= -1;
		}
	}
	for (i = first_num; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}
}

/**
 * print_int - prints an integer
 * @n: int
 * Return: 0
 */

void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, i, resp;

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
	;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{i
		resp = n / divisor;
		_putchar('0' + resp);
	}
}

/**
 * main - print the result of multiplication
 * @argc: int
 * @argv: value
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
