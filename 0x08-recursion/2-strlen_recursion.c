#include "main.h"

/**
 * _strlen_recursion - function the returns the lenght of a string recursion
 * @s: the string to handle
 * Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
