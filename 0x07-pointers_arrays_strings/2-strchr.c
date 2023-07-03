#include "main.h"
#define NULL 0

/**
 * _strchr - search for a specefic 
 * @s: the table to search
 * @c: the char to search for
 * Return: the pointer to the c char otherwise null
 */

char *_strchr(char *s, char c)
{
	while ( *s != '\0')
	{
		if (*s == c)
		{
			return (s);
			break;
		}
		s++;
	}
	
	if (*s == c)
		return (s);
	else
		return (NULL);
}
