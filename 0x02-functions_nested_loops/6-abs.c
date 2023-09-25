#include "main.h"

/**
 * _abs - absolute value
 * @i: value to be checked
 * Return: depends on the value
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (-1 * i);
	}
	else
	{
		return (i);
	}
}
