#include "main.h"
/**
 * get_endianness - endianness checker
 *
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int a;
	char *b;

	a = 1;
	b = (char *) &a;

	return ((int)*b);
}
