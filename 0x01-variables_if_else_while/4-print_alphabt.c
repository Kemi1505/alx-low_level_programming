#include <stdio.h>

/**
 * main - Entry program
 * Return: Always return 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
