#include "main.h"

/**
 * string_toupper - turn a string to upper
 * @s: the string to work with
 * Return: string capitaalized
 *
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
		i++;
	}
	return (s);
}
