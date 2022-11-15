#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * Return: Always 0
 */

int main(void)
{
	print("%s\n", __FILE__);

	return (0);
}
