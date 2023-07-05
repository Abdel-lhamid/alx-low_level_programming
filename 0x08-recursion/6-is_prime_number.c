#include "main.h"
/**
 * find_prf - function to check if n has any factors
 * @n: the number we want to check if prime
 * @prf: check if n can be devided by prf
 * Return: 0 or 1
 */

int find_prf(int n, int prf)
{
	if (prf > n)
		return (1);
	if (prf < n && n % prf == 0)
		return (0);
	find_prf(n, prf + 1);
}
/**
 * is_prime_number - a function to check if n is a prime num
 * @n: the number to check
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (find_prf(n, 2));
	if (n == 0 || n == 1)
		return (1);
	return (0);
}
