#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: digit to be printed
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');

	return (n % 10);
}
