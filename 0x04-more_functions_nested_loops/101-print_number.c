#include "main.h"
/**
 * print_number - prints numbers
 * @n : number to be printed
 * Return: void
 */
void print_number(int n)
{
	int x = 1, i = 0, ii = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / x != 0)
	{
		x *= 10;
		i++;
	}
	x = x / 10;

	while (ii < i)
	{
		_putchar('0' + n /  x);
		n = n - (n / x) * x;
		x = x / 10;
		ii++;
	}

	if (i == 0)
		_putchar('0' + n);
}
