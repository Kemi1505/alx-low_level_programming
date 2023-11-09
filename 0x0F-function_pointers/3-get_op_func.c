#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - selects the correct function
 * @s: the operator
 * Return: te pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
