#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function to print name
 * @name: the name
 * @f: the pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
