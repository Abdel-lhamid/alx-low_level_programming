#include "main.h"

/**
 * print_chessboard - print a chessboard provided in 2 dimension
 * @a: the chess table to print
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
