#include "main.h"
/**
 * print_triangle - Print a triangle
 * @size : Returns # as a triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, ii;

	while (i <= size && size > 0)
	{
		ii = 0;
		while (ii < size - i)
		{
			_putchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
