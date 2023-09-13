#include <stdio.h>
#include <stdlib.h>

/**
 * main - checker.
 * @argc: argument c
 * @argv: argument v
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *arr = (char *) main;
	int a, ibytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	ibytes = atoi(argv[1]);

	if (ibytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (a = 0; a < ibytes; a++)
	{
		printf("%02x", arr[a] & 0xFF);
		if (a != ibytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
