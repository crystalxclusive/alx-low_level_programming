#include "main.h"
#include <string.h>

/**
 * _strcmp -> comparing characters.
 * @s1: first parameter.
 * @s2: second parameter.
 *
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
