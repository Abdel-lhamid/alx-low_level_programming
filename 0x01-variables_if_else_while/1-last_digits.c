#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - generate random num and thest if the number is 0
 * or less than 6 or higher than 5
 * Return: 0
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = number % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	}
	else if
	{
		printf("Last digit of %d is 0 and is 0", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	}
	return (0);
}
