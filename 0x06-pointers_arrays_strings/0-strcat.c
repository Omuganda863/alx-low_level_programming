#include "main.h"
/**
 * _strcat - conts two str
 * @dest: inpt value
 * @src: inpt value
 *
 * Return: (void)
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[j] != '\0')
	{
		dest[a] = src[j];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
