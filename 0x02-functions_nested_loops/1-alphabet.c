#include "main.h"

/**
 * print_alphabet - The start
 * Description: Print the alphabet, in lowercase.
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
