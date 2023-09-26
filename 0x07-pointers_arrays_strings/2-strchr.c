#include "main.h"

/**
 * _strchr - Finding a charcater
 * @s: string we're finding
 * @c: alphabet we will look put for
 * Return: Depends whether c is found
 */
char *_strchr(char *s, char c)
{
	int ind;

	for (ind = 0; s[ind] >= '\0'; ind++)
	{
		if (s[ind] == c)
			return (s + ind);
	}
	return ('\0');
}
