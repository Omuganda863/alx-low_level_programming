#include "3-calc.h"

/**
 * main - check the code
 * @argc: argument
 * @argv: argument v
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int s, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	s = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operation(s, b));
	return (0);
}
