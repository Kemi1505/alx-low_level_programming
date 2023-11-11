#include "main.h"

/**
 * _strlen - returns the lenghth of a string
 * @s: pointer to the string
 * Return: the length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i += 1;
		s++;
	}
	return (i);
}
