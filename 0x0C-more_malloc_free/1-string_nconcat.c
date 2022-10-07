#include "main.h"
#include "stdlib.h"

/**
 * _strlen- string len helper function.
 * @s: string to get its length.
 * Return: length of @s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * string_nconcat- concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: number of character to add for @s2.
 * Return: pointer to new formed string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, len3, k, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n > len2)
		n = len2;
	len3 =  len1 + n + 1;
	ptr = malloc(len3 * sizeof(*ptr));
	if (ptr == NULL)
		return (0);
	for (k = 0; k  < len1; k++)
		ptr[k] = s1[k];
	for (j = 0; j < n; j++)
	{
		ptr[k] = s2[j];
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
