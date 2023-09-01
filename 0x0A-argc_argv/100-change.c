#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - min no of coins
 * @argc: args no
 * @argv: arr no
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int no, i, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	no = atoi(argv[1]);
	result = 0;

	if (no < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && no >= 0; i++)
	{
		while (no >= coins[i])
		{
			result++;
			no -= coins[i];
		}
	}

	printf("%d\n", result);
	return (0);
}
