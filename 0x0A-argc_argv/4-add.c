#include <stdio.h>
#include "main.h"

/**
 * _atoi - str to int
 * @s: conversion
 *
 * Return: int
 */
int _atoi(char *s)
{
	int j, d, n, len, f, digit;

	j = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (j < len && f == 0)
	{
		if (s[j] == '-')
			++d;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			f = 0;
		}
		j++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - sum
 * @argc: args
 * @argv: args arr
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int add, num, i, j, k;

	add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = _atoi(argv[k]);
		if (num >= 0)
		{
			add += num;
		}
	}

	printf("%d\n", add);
	return (0);
}
