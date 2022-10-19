#include "main.h"

/**
 * _abs - calculates the absolute value of an integer
 * @i: integer to be calculated
 * Return: absolute value of the integer
 */

int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
