#include "main.h"

/**
 * _pow_recursion - function to return x power of Y
 * @x: first input
 * @y: second input
 * Return: x pow Y
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0 || x == 1)
		return (1);
	else if (x == 0)
		return (0);
	else
		return (x * _pow_recursion(x, y - 1));
}
