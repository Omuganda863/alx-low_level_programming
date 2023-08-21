#include "main.h"
/**
 * puts_half - a print half of a string
 * if odd len, n = (length_of_the_string - 1) dvd by 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, longint;

	longint = 0;

	for (a = 0; str[a] != '\0'; a++)
		longint++;

	n = (longnint / 2);

	if ((longint % 2) == 1)
		n = ((longint + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
