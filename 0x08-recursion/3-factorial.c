#include "main.h"
/**
 * factorial - prints the factorial
 * @n: the integer
 * Return: the answer
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
