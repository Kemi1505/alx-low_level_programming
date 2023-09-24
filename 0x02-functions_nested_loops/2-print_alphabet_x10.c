#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char let;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}
		_putchar('\n');
	}
}
