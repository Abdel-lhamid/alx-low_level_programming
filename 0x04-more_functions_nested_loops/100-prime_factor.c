#include <stdio.h>


/**
 * main - print the largest prime factor of the given number
 * Return: 0
 *
 */

int main(void)
{
	unsigned long int number = 612852475143;
	unsigned long int pf = 2;

	while (pf < number)
	{
		if (number % pf == 0)
		{
			number /= pf;
			pf = 2;
		}
		else
			pf++;
	}
	printf("%lu\n", pf);
	return (0);
}
