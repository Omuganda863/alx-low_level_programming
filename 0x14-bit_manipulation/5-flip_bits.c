#include "main.h"

/**
 * flip_bits - no of bits to be changed
 * @n: 1st int
 * @m: 2nd int
 *
 * Return: no of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, add = 0;
	unsigned long int initial;
	unsigned long int bit = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		initial = bit >> b;
		if (initial & 1)
			add++;
	}

	return (add);
}
