#include "main.h"

/**
 * times_table - times table till 9
 * Return: void
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if ((c / 10) > 0)
			{
				_putchar((c / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
				_putchar((c % 10) + '0');
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}


