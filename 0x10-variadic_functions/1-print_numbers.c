#include "variadic_functions.h"

/**
 * print_numbers- print_numbers
 * @separator: separator
 * @n: num of unknown args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int num;
	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
