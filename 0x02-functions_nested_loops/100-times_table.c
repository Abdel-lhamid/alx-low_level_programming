#include "main.h"

/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */

void print_times_table(int n)
{
	int i;
	int j;
	int r;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = (i * j);
				if (j == 0)
					_putchar('0' + r);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (r <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + r);
					}
					else if (r > 9 && r < 100)
					{
						_putchar(' ');
						_putchar('0' + (r / 10));
						_putchar('0' + (r % 10));
					}
					else if (r >= 100)
					{
						_putchar('0' + (r / 100));
						_putchar('0' + ((r / 10) % 10));
						_putchar('0' + (r % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
