#include "main.h"
/**
 * _memset - specific val in block of memory
 * @s: address
 * @b: val
 * @n: no of bytes
 *
 * Return: array with new val
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
