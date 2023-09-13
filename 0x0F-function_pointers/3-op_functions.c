#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of 2 int
 * @a: 1st no
 * @b: 2nd no
 *
 * Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @a: 1st no
 * @b: 2nd no
 *
 * Return: diff
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns product
 * @a: 1st no
 * @b: 2nd no
 *
 * Return: prdct a b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div
 * @a: 1st no
 * @b: 2nd no
 *
 * Return: a * b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns modulus
 * @a: 1st no
 * @b: 2nd no
 *
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
