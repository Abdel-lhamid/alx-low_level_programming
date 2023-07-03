#include "main.h"
#define NULL 0

/**
 * _strpbrk - locates the first occurrence in the string s
 * @s: string to search
 * @accept: string to search for matches
 * Return: a pointer to the byte in s that matches in accept, or NULL
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
