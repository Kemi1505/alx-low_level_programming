#include "main.h"

/**
 * _memcpy - copies memory from a place to another
 * @dest: - where its copied to
 * @src: - where its copied from
 * @n: - times to check
 * Return: prints pointer memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
