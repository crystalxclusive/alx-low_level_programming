#include "main.h"

/**
 * prime_number_helper- checks if a number is prime.
 * @num: the number to check.
 * @factor: natural numberr starting from 2.
 * Return: 1 if numberr is prime.
 */
int prime_number_helper(int num, int factor)
{
	if (num <= 1 || num % factor == 0)
		return (0);
	else if (num == factor)
		return (1);
	else if (num > factor)
		prime_number_helper(num, factor + 1);
	return (1);
}

/**
 * is_prime_number- checks if a number is prime.
 * @n: number to checked.
 * Return: 1 if numberr is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (prime_number_helper(n, 2));
}
