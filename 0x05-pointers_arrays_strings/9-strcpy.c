#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest : copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	for (; src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}

	return (dest);
}
