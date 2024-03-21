#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - prime number
 * @n: the number
 * Return: final answer
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - chck if the number is prime
 * @n: number
 * @i: integer
 * Return: answer
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i < i)
		return (1);

	return (check_prime(n, i + 1));
}
