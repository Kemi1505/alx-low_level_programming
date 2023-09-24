#include <stdio.h>

/**
 * main - Hexadecimal
 * Return: Always return 0
 */
int main(void)
{
	int number = 0;
	char hexa = 'a';

	while (number < 10)
	{
		putchar('0' + number);
		number++;
	}
	while (hexa < 'g')
	{
		putchar(hexa);
		hexa++;
	}
	putchar('\n');
	return (0);
}
