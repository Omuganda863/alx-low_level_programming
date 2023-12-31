#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - operator
 * @s: pointer
 *
 * Return: pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a;

	a = 0;
	while (ops[a].op != NULL)
	{
		if (strcmp(s, ops[a].op) == 0)
			break;
		a++;
	}
	return (ops[a].f);
}
