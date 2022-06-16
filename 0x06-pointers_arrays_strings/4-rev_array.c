#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the content of an array  of int
 * @a: pointer
 * @n: array length
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, half;

	for (half = n / 2; half > 0; half--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
