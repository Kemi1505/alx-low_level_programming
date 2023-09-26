#include "main.h"

/**
 * _strspn - length of substring
 * @s: string to be searched
 * @accept: what is being measured
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int ind;

	while (*s)
	{
		for (ind = 0; accept[ind]; ind++)
		{
			if (*s == accept[ind])
			{
				bytes++;
				break;
			}
			else if (accept[ind + 1] == '\0')
				return (bytes);
		}
		s++;
	}
}
