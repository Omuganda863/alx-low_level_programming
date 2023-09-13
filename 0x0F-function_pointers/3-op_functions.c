#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds a and b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: 1 + 2
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a-b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a*b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a/b
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: a/b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
