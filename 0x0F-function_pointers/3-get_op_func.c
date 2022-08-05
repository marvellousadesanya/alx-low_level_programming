#include "3-calc.h"

/**
 * get_op_func - Function to select operator
 *
 * @s: char type
 *
 * Return: Always success
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

	while (i < 5)
	{
		if (*(ops[i].op) == *s && ops[i].op != NULL) /**
							      * If char(operator) is equal
							      * to any of the ones in ops
							      * array
							      */
			return (ops[i].f); /* Points to the function pointer in 3-calc.h */
		i++;
	}
	return (0);
}
