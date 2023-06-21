#include "main.h"

/**
 * times_table - prints multiplication table of 9
 */
void times_table(void)
{
	int i;
	int j;
	int r;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
				_putchar('0' + r);
			}
			else if (r > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (r / 10));
				_putchar('0' + (r % 10));
			}
		}
		_putchar('\n');
	}
}
