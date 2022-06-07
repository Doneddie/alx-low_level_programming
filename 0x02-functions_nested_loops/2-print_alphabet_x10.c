#include "main.h"

/**
 * main - code block
 * Description: Print alphabet 10 times
 * Return: Always 0
 */
int main(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
