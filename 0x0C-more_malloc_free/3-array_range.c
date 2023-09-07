#include "main.h"
#include <stdlib.h>
/**
 * array_range - int arr
 * @min: min val
 * @max: max val
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	int a;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		arr[a] = min;

	return (arr);
}
