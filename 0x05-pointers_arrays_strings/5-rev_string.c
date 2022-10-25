#include "main.h"

/**
 * rev_string - reverses a string
 *@s: input
* Return : string in reverse
*/

void rev_string(char *s)
{
	char revs = s[0];
	int a = 0;
	int i;

	while (s[a] != '\0')
		a++;

	for (i = 0; i < a; i++)
	{
		a--;
		revs = s[i];
		s[i] = s[a];
		s[a] = revs;
	}
}
