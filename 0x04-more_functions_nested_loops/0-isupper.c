include "main.h"
/**
 * _isupper - function to check if a char is upper or lower
 * @c: the char we want to test
 * Return: 0 if lower 1 if upper
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
