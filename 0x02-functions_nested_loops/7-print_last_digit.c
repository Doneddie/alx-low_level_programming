#include "main.h"
/**
 * print_last_digit - return the last digit
 * @n : number to check
 * Return: 0
 */

int print_last_digit(int n)
{
	int y;

	if (n < 0)
		y = -1 * (n % 10);
	else
		y = n % 10;

	_putchar(y + '0');
	return (y);
}
