#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The multiplication table requested
 * Return: Nothing
 */
void print_times_table(int n)
{
	int a, b, product;

	if (!(n > 15 || n < 0))
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				product = (a * b);
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (product < 10 && b != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((product % 10) + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if (product >= 100 && b != 0)
				{
					_putchar((product / 100) + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar((product % 10) + '0');
				}
				else
					_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
