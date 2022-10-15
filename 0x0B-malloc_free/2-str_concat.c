#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat- concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: pointer should point to a newly allocated space
 *	in memory which contains the contents of s1,
 *	followed by the contents of s2, and null terminated,
 *	and return NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;
	unsigned int len1, len2, i, j, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	len = len1 + len2 + 1;
	new_string = malloc(len * sizeof(char));
	if (new_string == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		new_string[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		new_string[i] = s2[j];
		i++;
	}
	return (new_string);
}
