#include "main.h"

/**
 * _strncpy - the code
 * @dest: - one value
 * @src: - another value
 * @n: - no of times
 * Return: zero
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
