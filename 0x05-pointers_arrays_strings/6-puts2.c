#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every single character of a string
 * @str: pointer to the string to print
 * Retrun: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
