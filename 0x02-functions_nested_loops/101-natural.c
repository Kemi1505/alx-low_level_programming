#include <stdio.h>

/**
 * main - prints sum of mutiples of 3 or 5 till 1024
 * Return: Always 0
 */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
	if (((i % 3) == 0) || ((i % 5) == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d\n", z);
	return (0);
}
