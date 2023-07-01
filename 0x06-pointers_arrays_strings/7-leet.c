#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to manipulate
 *
 * Return: the encoded strring
 */

char *leet(char *s)
{
	int i, j;
	char *ltrs = "aAeEoOtTlL";
	char *leets = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ltrs[j] != '\0'; j++)
		{
			if (s[i] == ltrs[j])
			{
				s[i] = leets[j];
				break;
			}
		}
	}

	return (s);
}
