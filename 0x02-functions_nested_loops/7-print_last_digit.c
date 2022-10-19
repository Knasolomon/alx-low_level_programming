#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: digit to be printed
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
		digit *= -1;

	_putchar(digit + '0');

	return (0);
}
