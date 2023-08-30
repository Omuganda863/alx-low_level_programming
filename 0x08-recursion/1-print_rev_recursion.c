#include "main.h"
/**
 * _print_rev_recursion - str in reverse.
 * @s: output.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
