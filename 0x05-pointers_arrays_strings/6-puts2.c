#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - print every other character of the string
 * @str: the string we gonna use
 */
void puts2(char *str)
{
	int len = _strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar("\n");
}
