#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string with recursion
 * @s: the string we want to print
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
