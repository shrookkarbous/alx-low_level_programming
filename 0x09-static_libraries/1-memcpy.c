#include"main.h"

/**
 * _memcpy - A function copies n bytes from memory area src to memory area dest
 *
 * @dest: for memory
 * @src: the source
 * @n: the length to be copied
 *
 * Return: Always dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int lnr;

	for (lnr = 0; lnr < n; lnr++)
	{
		dest[lnr] = src[lnr];
	}
	return (dest);
}
