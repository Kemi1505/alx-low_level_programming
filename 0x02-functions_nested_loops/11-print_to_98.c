#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print a digit till 98
 * @n: value digit
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			printf(", ");
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d", n);
			printf(", ");
			n--;
		}
	}
	printf("98");
	printf("\n");
}

