#include "main.h"

/**
 * _strncat - the code
 * @dest: one balue
 * @src: anotjer value
 * @n : no of tjmes
 * Return: zero
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;

	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
