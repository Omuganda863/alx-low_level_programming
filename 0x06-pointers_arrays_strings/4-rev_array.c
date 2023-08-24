#include "main.h"
/**
 * reverse_array - converts array of int
 * @a: arr
 * @n: no of elements in arr
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
