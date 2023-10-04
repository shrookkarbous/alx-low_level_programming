#include "main.h"

/**
 * _strlen - to know the length od a string
 * @s: pointer to a string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * argstostr - a function that concatenates
 * all the arguments of your program
 * @ac: integer
 * @av: argument
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, cmpt = 0;
	char *c;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i ++, nc++)
		nc += _strlen(av[i]);

	c = malloc(sizeof(char) * nc + 1);
	if (c == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			c[cmpt] = av[i][j];

		c[cmpt] = '\n';
		cmpt++;
	}
	c[cmpt] = '\0';
	return (c);
}
