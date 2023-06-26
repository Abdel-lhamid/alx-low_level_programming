#include "main.h"

/**
 * print_rev - print the revers of a string
 * @s: the string we want to reverse
 *
 */

void print_rev(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
