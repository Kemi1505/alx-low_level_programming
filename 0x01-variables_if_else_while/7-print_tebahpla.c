#include <stdio.h>

/**
 * main - Reverse alphabet
 * Return: Always return 0
 */
int main(void)
{
	char reverse = 'z';

	while (reverse >= 'a')
	{
		putchar(reverse);
		reverse--;
	}
	putchar('\n');
	return (0);
}
