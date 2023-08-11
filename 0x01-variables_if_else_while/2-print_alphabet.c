#include <stdio.h>

/**
 * main - print: the alphabet in lowercase
 * follow a new line
 * Return: Always 0 ()
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
