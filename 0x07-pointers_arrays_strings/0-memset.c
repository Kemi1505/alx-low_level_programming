#include "main.h"

/**
 * _memset - function type
 * @s: memory set
 * @b: value to copy
 * @n: number of times to copy
 * Return: pointer result
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	s[a] = b;
	}
	return (s);
}
