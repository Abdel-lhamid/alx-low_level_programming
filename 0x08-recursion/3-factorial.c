#include "main.h"
/**
 * factorial - factorial function with recursion
 * @n: the number we want to calculate the factorial for
 * Return: the factorial result of n
 *
 */

int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
