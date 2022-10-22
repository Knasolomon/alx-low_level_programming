#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */

int main(void)
{
	long a, b;

	a = 612852475143;

	for (b = 2; a > b; b++)
	{
		while (a % b == 0)
		{
			a = a / b;
		}
	}

	printf("%lu", b);
	putchar('\n');

	return (0);
}
