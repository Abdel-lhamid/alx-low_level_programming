#include "main.h"

/**
 * _islower - check if lower or upper
 * Return: 0 or 1
 */
int _islower(char c)
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
