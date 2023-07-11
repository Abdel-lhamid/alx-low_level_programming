#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *str2;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		len++, i++;
	len++;

	str2 = malloc(sizeof(char) * len);

	if (str2 == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}
