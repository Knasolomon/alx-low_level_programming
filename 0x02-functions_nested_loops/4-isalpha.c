#include "main.h"

/**
 * _isalpha - checks whether a character is lowercase
 * @c: character to be checked
 * Return: 1 if character is lowercase or uppercase
 * Return 0 if character is not lowercase or uppercase
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
