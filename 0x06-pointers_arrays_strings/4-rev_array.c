#include "main.h"

/**
 * reverse_array - the code
 * @a: one balue
 * @n: another one
 * Return: zero
 */
void reverse_array(int *a, int n)
{
	int b;
	int t;

	for (b = 0; b < n--; b++)
	{
		t = a[b];
		a[b] = a[n];
		a[n] = t;
	}
}
