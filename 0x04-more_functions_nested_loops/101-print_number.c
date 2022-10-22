#include "main.h"

/**
 * print_number - prints an integer
 * @n : Variable
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int z;
	int a, b;

	b = 10;

	if (n >= 0 && n < 10)
	{
		_putchar (n + '0');
	}

	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar ('-');
		_putchar (n + '0');
	}

	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar ('-');
		}

		z = n;

		while (z / b > 9)
		{
			b = b * 10;
		}

		while (b > 0)
		{
			a = z / b;
			z = z % b;
			_putchar (a + '0');
			b = b / 10;
		}
	}
}
