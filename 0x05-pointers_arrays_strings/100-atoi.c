#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the int we got from the string
 */
int _atoi(char *s)
{
	int dig;
	int si = 1;
	int result= 0;

	while (*s != '\0')
	{
		if (*s == '-' || *s == '+')
		{
			if (*s == '-')
				si *=  -1;
		}
	}
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			dig = *s - '0';
			result = result * 10 + dig;
		}
		else if (result != '0')
		{
			break;
		}
		s++;
	}
	return (result * si);
}
