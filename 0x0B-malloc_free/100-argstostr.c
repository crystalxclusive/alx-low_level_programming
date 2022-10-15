#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr- concatenates all the arguments of your program.
 * @ac: number of arguments.
 * @av: array of strings given as an argument.
 * Return: NULL if ac == 0 or av == NULL,
 *	pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, count = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			count++;
			b++;
		}
		a++;
	}
	count = count + ac + 1;
	str = malloc(count * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
