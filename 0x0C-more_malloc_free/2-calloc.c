#include "main.h"
#include <stdlib.h>

/**
 * copychar- copy character into an array.
 * @s1: array to copy to.
 * @c: char to copy.
 * @n: size of @s1.
 * Return: pointer to s1.
 */
char *copychar(char *s1, char c, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s1[i] = c;
		i++;
	}
	return (s1);
}

/**
 * _calloc- allocates memory for an array, using malloc.
 * @nmemb: size of array.
 * @size: size of the data type.
 * Return: pointer to the array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array_ptr = malloc(nmemb * size);
	if (array_ptr == NULL)
		return (NULL);
	copychar(array_ptr, 0, (nmemb * size));
	return (array_ptr);
}
