#include "main.h"

/**
 * malloc_checked - memory alloc.
 * Description: 98
 * @b: unsigned integer
 * Return: void pntr
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);

	return (i);
}
