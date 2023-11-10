#include "variadic_functions.h"

/**
 * sum_them_all - add all
 * @n: the numbers...
 * Return: the aaddition
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list;

	va_start(list, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum = sum + va_arg(list, int);
	va_end(list);
	return (sum);
}

