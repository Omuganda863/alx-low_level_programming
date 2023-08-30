#include "main.h"

int another_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - sqrt of no
 * @n: sqrt of no
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (another_sqrt_recursion(n, 0));
}

/**
 * another_sqrt_recursion - recurse sqrt
 * @n: no of sqrt
 * @i: iterator
 *
 * Return: sqrt
 */
int another_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (another_sqrt_recursion(n, i + 1));
}
