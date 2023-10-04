#include "main.h"

/**
 * alloc_grid - a function that returns
 * a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return:two dimensional array
 */


int **alloc_grid(int width, int height)
{
	int **tab, i, n;

	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			tab[i] = malloc(sizeof(**tab) * width);
			if (tab[i] == 0)
			{
				while (i--)
					free(tab[i]);
				free(tab);
				return (NULL);
			}

			for (n = 0; n < width; n++)
				tab[i][n] = 0;
		}
	}
	return (tab);
}
