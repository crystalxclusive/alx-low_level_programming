#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked- allocates memory using malloc.
 * @b: The size of memory to allocate in byte.
 * Return: The pointer to the memory address,
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b)
		if (ptr == NULL)
			exit(98);
	return (ptr);
}
