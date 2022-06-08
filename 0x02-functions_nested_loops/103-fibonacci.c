#include <stdio.h>
/**
 * main - main block
 * Description: Prints fibonacci numbers less than 4000000
 * Return: 0
 */
int main(void)
{
	int x = 0, y = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = x + y;
		x = y;
		y = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}

