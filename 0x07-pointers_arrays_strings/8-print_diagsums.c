#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals of a square
 * @a: the table we want to use
 * @size: the size of the table
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, l, fdiag = 0, sdiag = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				fdiag += a[i][j];
		}
	}
	for (k = 0; k < size; k++)
	{
		j = size - 1;

		for (l = size - 1; l < 0; l--)
		{
			if (i == j)
			{
				sdiag += a[k][l];
			}
		}
		i--;
	}

	printf("%d, %d", fdiag, sdiag);
}
