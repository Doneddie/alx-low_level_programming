#include "main.h"

/**
 * print_square - Prints a square
 * @size : size of # to be printed
 * Return: void
 */
void print_square(int size)
{
	int i = 0, ii;

	while (i < size && size > i)
	{
		ii = 0;
		while (ii < size)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
