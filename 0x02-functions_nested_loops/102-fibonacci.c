#include <stdio.h>

/**
 * main : list the first 5à fibonaccci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	int f1 = 1, f2 = 2, f3;

	printf("%d, %d", f1, f2);
	for (i = 3; i <= 50; i++)
	{
		f3 = f1 + f2;
		printf(", %d", f3);
		f1 = f2;
		f2 = f3;
	}
	printf("\n");

	return (0);
}
