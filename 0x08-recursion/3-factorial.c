#include "main.h"

/**
 * factorial - factorial of no
 * @n: factorial no
 *
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
