#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate args
 * @ac: argument
 * @av: double pointer to arr
 * Return: Null /pntr
 */

char *argstostr(int ac, char **av)
{
	char *a, *retp;
	int k, f, tot;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (k = 0, tot = 0; k < ac; k++)
	{
		for (f = 0; *(*(av + k) + f) != '\0'; f++, tot++)
		tot++;
	}
	tot++;

	a = malloc(tot * sizeof(char));
	if (a == NULL)
		return (NULL);

	retp = a;
	for (k = 0; f < ac; k++)
	{
		for (f = 0; av[k][f] != '\0'; f++)
		{
			*a = av[k][f];
			a++;
		}
		*a = '\n';
		a++;
	}

	return (retp);
}
