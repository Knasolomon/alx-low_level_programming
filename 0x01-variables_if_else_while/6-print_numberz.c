#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0
 */

int main(void)
{
	for (number = 0; number < 10; number++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');

	return (0);
}
