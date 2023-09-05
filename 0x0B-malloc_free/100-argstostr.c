#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates args
 * @ac: args
 * @av: args
 *
 * Return: pointer to arr
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int a, f, j, ij;

	if (ac == 0)
		return (NULL);

	for (a = f = 0; f < ac; f++)
	{
		if (av[f] == NULL)
			return (NULL);

		for (j = 0; av[f][j] != '\0'; j++)
			a++;
		a++;
	}

	aout = malloc((a + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (f = j = ij = 0; ij < a; j++, ij++)
	{
		if (av[f][j] == '\0')
		{
			aout[ij] = '\n';
			f++;
			ij++;
			j = 0;
		}
		if (ij < a - 1)
			aout[ij] = av[f][j];
	}
	aout[ij] = '\0';

	return (aout);
}
