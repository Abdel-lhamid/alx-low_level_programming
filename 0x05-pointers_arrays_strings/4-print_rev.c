#include "main.h"
#include "3-puts.c"
#include "2-strlen.c"

/**
 * print_rev - print the revers of a string
 * @s: the string we want to reverse
 *
 */

void print_rev(char *s)
{
	int length = _strlen(s);
	int i, j;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	_puts(s);
}
