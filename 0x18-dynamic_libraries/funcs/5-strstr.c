#include "main.h"

/**
 * _strstr - find the first occurrence of needle in haystack
 * @haystack: the string to search in
 * @needle: the string to search for completly
 * Return: the pointer to begining location of the located substring, or null
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[k] == needle[j])
					k++;
				else
					break;
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
