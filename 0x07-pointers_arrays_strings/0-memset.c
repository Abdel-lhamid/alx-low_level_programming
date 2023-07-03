#include "main.h"

/**
 * _memset - imitate memset
 * @s: the table we want to fill
 * @b: the content that will be in the table
 * @n: the numbers of s elements to fill
 * Return: the table after its filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
