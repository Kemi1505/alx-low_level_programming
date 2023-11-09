#include "function_pointers.h"

/**
 * int_index - returns the index place
 * @array: tge array
 * @size: program size
 * @cmp: array's place
 * Return: 0(sucess)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0;  i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
