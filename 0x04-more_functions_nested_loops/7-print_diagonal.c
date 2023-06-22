#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: n times
 */
void print_diagonal(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
	}
	_putchar('\n');
}
