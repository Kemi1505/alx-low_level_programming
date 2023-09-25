#include "main.h"

/**
 * print_sign - print the sign
 * @n: number to check
 *
 * Return: Depends on the number
 */
int print_sign(int n)
{
	int minus = -1;
	char m = (char) minus;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (m);
	}
}


