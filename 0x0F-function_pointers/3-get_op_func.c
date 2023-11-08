#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function to perform
 *			the operation asked by the user
 *
 * @s: input pointer of function
 *
 * Return: the correct operation
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
	int i = 0;

	for(; i < 5; i++)
	{
		if (s && s[0] == ops[i].op[0] && !s[1])
			return (ops[i].f);
	}

	return (NULL);
}
