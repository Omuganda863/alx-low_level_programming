#include "main.h"
/**
 * _strcmp - compare 3 str val
 * @s1: val
 * @s2: val
 *
 * Return: s1[q] - s2[q]
 */
int _strcmp(char *s1, char *s2)
{
	int q;

	q = 0;
	while (s1[q] != '\0' && s2[q] != '\0')
	{
		if (s1[q] != s2[q])
		{
			return (s1[q] - s2[q]);
		}
		q++;
	}
	return (0);
}
