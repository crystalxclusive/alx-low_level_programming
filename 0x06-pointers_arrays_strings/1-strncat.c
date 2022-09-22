#include "main.h"
#include <string.h>

/**
 * _strncat -> Function to append some characters
 *  @dest: first parameter
 *  @src: second parameter
 *  @n: third parameter
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
