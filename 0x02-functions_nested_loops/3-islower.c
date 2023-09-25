#include "main.h"

/**
 * _islower - checks lower case
 * @c: the character to check
 *
 * Return: return 1 if c is lowercase else 0
 */
int _islower(int c)
{
	char h;
	int lower = 0;

	for (h = 'a'; h <= 'z'; h++)
	{
		if (h == c)
			lower = 1;
	}
	return (lower);
}

