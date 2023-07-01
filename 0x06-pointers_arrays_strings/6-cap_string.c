#include "mail.h"

/**
 * cap_string - capitalize word of a string
 * @s: the string to work with
 * Return: the string with words capitalized
 */

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;

	for (i = 0; s[i] != 'a'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z')
				&& (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
				s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
				s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
				s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t'
				|| s[i - 1] == '\n'))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
