#include <stdio.h>
/**
 * main - main block
 * Description: Prints fibonacci numbers starting
 * with 1 and 2.
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int m = 0, n = 1, next;

while (i < 50)
{
next = m + n;
m = n;
n = next;
printf("%lu", next);

if (i < 49)
{
	printf(", ");
}
i++;
}
putchar('\n');
return (0);
}
