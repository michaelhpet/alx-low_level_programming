#include "3-calc.h"

/**
 * get_op_func - selects and returns a pointer to the correct function to
 * perform the arithmetic operation asked by the user
 * @s: operator
 * Return: pointer to arithmetic function corresponding to s
*/
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	}

	i = 0;
	while (s[0] != ops[i].op[0])
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
