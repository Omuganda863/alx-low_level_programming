#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - conts 2 str
 * @s1: str 1
 * @s2: str 2
 * @n: max bytes
 * Return: null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (k = 0; s1[k]; k++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (k = 0; s1[k]; k++)
		concat[len++] = s1[k];

	for (k = 0; s2[k] && k < n; k++)
		concat[len++] = s2[k];

	concat[len] = '\0';

	return (concat);
}
