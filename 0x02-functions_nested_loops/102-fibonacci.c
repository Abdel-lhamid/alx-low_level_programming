#include <stdio.h>

/**
 * main - list the first 5à fibonaccci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	long f1 = 1;
	long f2 = 2;
	long f3;

	printf("%li, %li", f1, f2);
	for (i = 3; i <= 50; i++)
	{
		f3 = f1 + f2;
		printf(", %li", f3);
		f1 = f2;
		f2 = f3;
	}
	printf("\n");

	return (0);
}
