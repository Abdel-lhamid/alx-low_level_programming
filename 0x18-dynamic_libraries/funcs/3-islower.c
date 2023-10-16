#include "main.h"

/**
 * _islower - check if lower or upper
 * @c: character we want to check
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
