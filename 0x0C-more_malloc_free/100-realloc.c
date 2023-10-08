#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: unsigned integer
 * @new_size: unsigned integer
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *c;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		c = malloc(new_size);
		if (c == NULL)
			return (NULL);
		return (c);
	}
	if (new_size > old_size)
	{
		c = malloc(new_size);
		if (c == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)c + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (c);
}
