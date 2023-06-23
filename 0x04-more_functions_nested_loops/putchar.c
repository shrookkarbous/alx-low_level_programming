#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the charcter c to stdout
 * @c: the charcter to be printed
 *
 * Return: On success 1
 *	On error -1 is returned and errno is set appropriatly
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
