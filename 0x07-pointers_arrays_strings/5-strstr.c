#include "main.h"

/**
 * _strstr - entry program
 * @haystack: one value
 * @needle: another value
 * Return: output
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}
	return ('\0');
}
