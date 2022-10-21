#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: int to be checked
 * Return:n 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	int a = 0;

	if (c >= '0' && c <= '9')
		a = 1;

	return (a);
}
