#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Return: Always 0
 */

void more_numbers(void)
{
	int number, b;

	for (b = 0; b <= 9; b++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 0)
			{
				_putchar((number / 10) + '0');
			}

			_putchar((number % 10) + '0');
		}

		_putchar('\n');
	}
}
