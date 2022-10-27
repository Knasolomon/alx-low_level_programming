#include "main.h"

/**
 * _strncat - fuunction that concatenates two strings with n bytes
 * @dest: copy to
 * @src: copy from
 * @n: number of bytes
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
