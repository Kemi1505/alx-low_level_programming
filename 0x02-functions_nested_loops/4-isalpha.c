#include "main.h"

/**
 * _isalpha - checks alphabets
 * @c: alphabet to check
 *
 * Return: return 1 if letter else 0
 */
int _isalpha(int c)
{
	char lower;
	char UPPER;
	int j = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (UPPER = 'A'; UPPER <= 'Z'; UPPER++)
		{
			if (lower == c || UPPER == c)
			{
				j = 1;
			}
		}
	}
	return (j);
}
