#include "main.h"

int another_prime(int n, int i);

/**
 * is_prime_number - if int is prime no
 * @n: val
 *
 * Return: 1 or 0 /true or false
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (another_prime(n, n - 1));
}

/**
 * another_prime - checks prime no
 * @n: val
 * @i: iteration
 *
 * Return: 1 or 0 /true or false
 */
int another_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (another_prime(n, i - 1));
}
