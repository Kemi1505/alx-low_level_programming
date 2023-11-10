#include "variadic_functions.h"

/**
 * print_stings - print strings
 * @separator: character to separate the strings
 * @n: the strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);
		if (!str)
			str = "nil";
		if (!separator)
			printf("%s", str);
		else if (separator && index == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(strings);
}
