#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - Gets the function for the user-requested operation.
 * @s: pointer to function
 * Return: an integer
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
	int i;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
