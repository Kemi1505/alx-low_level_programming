#include <stdio.h>

/**
 * main - lowercase alphabets
 * Return: Always return 0
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar  ('\n');
	return (0);
}
