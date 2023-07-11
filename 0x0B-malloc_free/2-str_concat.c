#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function to concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		len1++, i++;
	while (s2[j])
		len2++, j++;
	len2++;
	res = malloc(sizeof(char) * (len1 + len2));

	if (res == NULL)
		return (NULL);

	i = 0, j = 0;
	while (i < len1)
	{
		res[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		res[i] = s2[j];
		i++, j++;
	}

	return (res);
}
