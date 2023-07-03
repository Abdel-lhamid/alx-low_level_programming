#include "main.h"

/**
 * _strspn - return the length of mached char in 2 strings
 * @s: string to search
 * @accept: string to search for matches
 * Return: number of bytes matching
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
		}
	}
	return (counter);
}
