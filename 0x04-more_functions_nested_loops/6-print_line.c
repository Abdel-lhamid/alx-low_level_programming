#include "main.h"

/**
 * print_line - print _ n numbers
 * @n: the number of time it will print
 *
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
