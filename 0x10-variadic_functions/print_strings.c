#include "variadic_functions.h"

/**
 * print_strings- print_strings
 * @separator: separator
 * @n: num of unknown arg
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, n);
	while (i < n)
	{
		str = va_arg(args, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
