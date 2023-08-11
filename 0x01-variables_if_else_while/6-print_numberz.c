#include <stdio.h>

/**
 * main - prints  single digit numbers of base 10 to 0,
 * followed by a new line with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
