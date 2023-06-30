#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: depends of the result of the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i, ret;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);

	return (0);
}
