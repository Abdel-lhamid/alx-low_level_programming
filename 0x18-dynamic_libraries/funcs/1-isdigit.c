#include "main.h"

/**
 * _isdigit - checks if 0<=c<10
 * @c: the argument we want to test
 * Return: 1 if true else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
