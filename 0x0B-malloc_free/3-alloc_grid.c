#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - grid loop
 * @width: width
 * @height: height
 * Return: 2D pointer arr
 */
int **alloc_grid(int width, int height)
{
	int **mem;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	mem = malloc(sizeof(int *) * height);

	if (mem == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		mem[a] = malloc(sizeof(int) * width);

		if (mem[a] == NULL)
		{
			for (; a >= 0; a--)
				free(mem[a]);

			free(mem);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			mem[a][b] = 0;
	}

	return (mem);
}
