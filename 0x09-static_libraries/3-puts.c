#include "main.h"
/**
 * _puts - prints a str followed by \n  to stdout
 * @str: str to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
