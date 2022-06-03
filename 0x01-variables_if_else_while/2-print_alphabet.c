#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Printing alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char c = 'a-z';

	while (c <= '2')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
