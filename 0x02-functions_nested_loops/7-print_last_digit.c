#include "main.h"

/**
 * print_last_digit - returns the last digit
 * @n the number we want to extract the last digit
 * Return: the last digit
 *
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n % 10);
}
