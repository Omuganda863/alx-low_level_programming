#include "main.h"

/**
 * print_binary - binary equiv of decimal
 * @n: binary int
 */
void print_binary(unsigned long int n)
{
	int a, num = 0;
	unsigned long int initial;

	for (a = 63; a >= 0; a--)
	{
		initial = n >> a;

		if (initial & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
