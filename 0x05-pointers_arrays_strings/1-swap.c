#include "main.h"
/**
 * swap_int - swap2 ints
 * @a: int to swap
 * @b: int to swap to
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
