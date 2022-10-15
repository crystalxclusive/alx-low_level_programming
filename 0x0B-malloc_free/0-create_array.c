#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array- creates an array of chars,
 *	and initializes it with a specific char.
 * @size: The size of the array to be created.
 * @c: The character in the array.
 * Return: a pointer to the array.
 *	or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
