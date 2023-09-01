#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 no
 * @argc: arg
 * @argv: arg
 *
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int i, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", i * y);

	return (0);
}
