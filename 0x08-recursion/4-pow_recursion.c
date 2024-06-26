#include "main.h"

/**
 * _pow_recursion - Returns the answers
 * @x: the number to multiply
 * @y: the  number of times to multiply it
 * Return: te final answer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
