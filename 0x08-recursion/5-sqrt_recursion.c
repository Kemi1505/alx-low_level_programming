#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - square root
 * @n: number
 * Return: answer
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - root
 * @n: number
 * @i: integer
 * Return: answer
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
