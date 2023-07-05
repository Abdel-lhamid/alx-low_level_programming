#include "main.h"

/**
 * finnder - function to fund a test the square root
 * @n: the number to find the square root for
 * @sr: the square root to test and return if right
 * Return: square root or -1
 *
 */
int finnder(int n, int sr)
{
	if ((sr * sr) == n)
		return (sr);
	if ((sr * sr) > n)
		return (-1);
	return (finnder(n, sr + 1));
}

/**
 * _sqrt_recursion - find square root of n using recursion
 * @n: the input
 * Return: the square root or 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (finnder(n, 0));
}
