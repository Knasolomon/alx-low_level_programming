#include "main.h"

/**
 * print_sign - checks whether integer is positive, negative or zero
 * @n: number to be checked
 * Return: 1 if positive, 0 if zero, -1 if negative and / if not a digit
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('-');
		return ('/');
	}
}
