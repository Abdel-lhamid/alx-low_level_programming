#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse a string
 * @s: the string we want to reverse
 *
 */

void rev_string(char *s)
{
	int i,j;
	int len = _strlen(s);
	char temp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
