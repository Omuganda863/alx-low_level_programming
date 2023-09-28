#include "main.h"

/**
 * get_endianness - machine checker
 * Return: 0 
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (*b);
}
