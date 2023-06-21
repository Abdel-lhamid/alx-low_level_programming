#include "main.h"

/**
 * print_last_digit - returns the last digit
 * @n: the number we want to extract the last digit
 * Return: the last digit
 *
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld *= -1;
	}
	_putchar('0' + ld);
	return (ld);
}
