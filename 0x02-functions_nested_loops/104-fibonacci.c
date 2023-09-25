#include <stdio.h>

/**
 * main - prints first 98 fibonacci
 * Return: zero
 */
int main(void)
{
	int len;
	unsigned long fibo1 = 0, fibo2 = 1, sum;
	unsigned long fibo11, fibo12, fibo21, fibo22;
	unsigned long num1, num2;

	for (len = 0; len < 92; len++)
	{
	sum = fibo1 + fibo2;
	printf("%lu, ", sum);
	fibo1 = fibo2;
	fibo2 = sum;
	}
	fibo11 = fibo1 / 10000000000;
	fibo21 = fibo2 / 10000000000;
	fibo12 = fibo1 % 10000000000;
	fibo22 = fibo2 % 10000000000;
	for (len = 93; len < 99; len++)
	{
	num1 = fibo11 + fibo21;
	num2 = fibo12 + fibo22;
	if ((fibo12 + fibo22) > 9999999999)
	{
	num1 += 1;
	num2 %= 10000000000;
	}
	printf("%lu%lu", num1, num2);
	if (len != 98)
	printf(", ");
	fibo11 = fibo21;
	fibo12 = fibo22;
	fibo21 = num1;
	fibo22 = num2;
	}
	printf("\n");
	return (0);
}
