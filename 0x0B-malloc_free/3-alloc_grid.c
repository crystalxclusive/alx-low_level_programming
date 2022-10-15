#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid- function that returns a pointer to a
 *	2 dimensional array of integers.
 * @width: The size of the inner array.
 * @height: The size of the outer array.
 * Return: a pointer to a 2 dimensional array of integers,
 *	NULL on failure,
 *	If width or height is 0 or negative, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **d_array_ptr;
	
	if (width <= 0 || height <= 0)
		return (NULL);
	d_array_ptr = malloc(height * sizeof(int *));
	if (d_array_ptr  == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		d_array_ptr[i] = malloc(width * sizeof(int));
		if (d_array_ptr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(d_array_ptr[i]);
			free(d_array_ptr);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		d_array_ptr[i][j] = 0;
	return (d_array_ptr);
}
