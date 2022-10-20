#include <stdio.h>
/**
  * main - print the first 98 fibonacci numbers
  * Return: Nothing
  */
int main(void)
{
	int count;
	unsigned long a, b, c;
	unsigned long i, j, k, carry;

	count = 0;
	a = 0;
	b = 1;
	for (count = 1; count <= 91; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}
	i = a % 1000;
	a = a / 1000;
	j = b % 1000;
	b = b / 1000;
	while (count <= 98)
	{
		carry = (i + j) / 1000;
		k = (i + j) - carry * 1000;
		c = (a + b) + carry;
		i = j;
		j = k;
		a = b;
		b = c;
		if (k >= 100)
			printf("%lu%lu", c, k);
		else
			printf("%lu0%lu", c, k);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}
