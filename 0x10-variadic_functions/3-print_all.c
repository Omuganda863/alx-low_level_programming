#include "variadic_functions.h"

/**
 * print_all - print
 * @format: arguments passed to function.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, k, a = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		k = 0;
		while (t_arg[k])
		{
			if (format[i] == t_arg[k] && a)
			{
				printf(", ");
				break;
			} k++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), a = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), a = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), a = 1;
			break;
		case 's':
			str = va_arg(valist, char *), a = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(valist);
}
