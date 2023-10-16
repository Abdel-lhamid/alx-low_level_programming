#include "main.h"

/**
 * _isalpha - check if the character is alpha or else
 * @c: character we want to check
 * Return: 1 if character else 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
