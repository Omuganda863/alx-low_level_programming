#include <stdlib.h>
#include "main.h"

/**
 * wordCounter - counts words in str
 * @s: str
 *
 * Return: words
 */
int wordCounter(char *s)
{
	int flag, i, j;

	flag = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			j++;
		}
	}

	return (j);
}
/**
 * **strtow - str to words
 * @str: str
 *
 * Return: pointer to arr
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, j = 0, len = 0, words, c = 0, start, fin;

	while (*(str + len))
		len++;
	words = wordCounter(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				fin = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < fin)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}

	matrix[j] = NULL;

	return (matrix);
}
