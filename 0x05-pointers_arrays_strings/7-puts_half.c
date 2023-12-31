#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - print the last half of the given string
 * @str: the string we gonna use
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i = len / 2;

	if (len % 2 != 0)
	{
		i++;
	}

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
