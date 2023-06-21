#include "main.h"

/**
 * print_times_table - print times table to n
 * @n: input
 *
 */
void print_times_table(int n)
{
	int i;
	int j;
	int r;

	for (i = 0; i <= n ; i++)
	{
		for (j = 0; j <= n; j++)
		{
			r = (i * j);

			if (j == 0)
			{
				_putchar('0' + r);
			}
			else if (r < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + r);
			}
			else if (r < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (r / 10));
				_putchar('0' + (r % 10));
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (r / 100));
				_putchar('0' + ((r / 10) % 10));
				_putchar('0' + (r % 10));
			}
		}
		_putchar('\n');
	}
}
