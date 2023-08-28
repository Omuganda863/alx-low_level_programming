#include "main.h"
/**
 *_memcpy - cpy mem area
 *@dest: mem store
 *@src: copied mem
 *@n: no of bytes
 *
 *Return: changed byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
