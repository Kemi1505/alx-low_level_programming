#include <stdio.h>

/**
 * main - lower and uppercase
 * Return: Always return 0
 */
int main(void)
{
	char alphabet = 'a';
	char ALPHA_BET = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHA_BET <= 'Z')
	{
		putchar(ALPHA_BET);
		ALPHA_BET++;
	}

	putchar('\n');
	return (0);
}


