#include "main.h"

/**
 * main - check code
 * Description: Print the alphabet, in lowercase.
 * Return: Always 0.
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);

}
