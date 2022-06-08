#include "main.h"
/**
 * print_sign - Print the sign of a number
 * @n : number to check
 * Return: 0 or 1
 */

int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		a = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		a = 0;
		_putchar('0');
	}
	else
	{
		a = -1;
		_putchar('-');
	}

	return (a);
}

