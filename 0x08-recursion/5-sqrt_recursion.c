#include "main.h"

/**
 * sqrt_helper_recursion- generates the square root of a number.
 * @num: the number we are looking for its square root.
 * @root: the squre root.
 * Return: square root.
 */
int sqrt_helper_recursion(int num, int root)
{
	if (root * root > num)
		return (-1);
	else if (root * root == num)
		return (root);
	else
		return (sqrt_helper_recursion(num, (root + 1)));
}

/**
 * _sqrt_recursion- returns the natural square root of a number.
 * @n: the integer we are looking for its square root.
 * Return: the square root.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_helper_recursion(n, 1));
}
