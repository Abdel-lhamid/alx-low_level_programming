#include "main.h"
#define NULL 0

/**
 * _strspn - return the length of mached char in 2 strings
 * @s: string to search
 * @accept: string to search for matches
 * Return: number of bytes matching
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
	}
	return (NULL);
}
