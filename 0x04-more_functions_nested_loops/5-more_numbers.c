#include "main.h"

/**
 * more_numbers - print from 0 to 14 10 times
 *
 */
void more_numbers(void)
{
	int i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (i / 10 > 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
