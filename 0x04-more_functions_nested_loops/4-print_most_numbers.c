#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * do not print 2 and 4
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int b = 0;

	while (b < 10)
	{
		if (b != 2 && b != 4)
			_putchar(b + '0');

		b++;
	}

	_putchar('\n');
}
