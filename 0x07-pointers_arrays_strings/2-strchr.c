#include "main.h"
#include "2-strlen.c"

/**
 * _strchr - search for a specefic 
 * @s: the table to search
 * @c: the char to search for
 */


char *_strchr(char *s, char c)
{
	int i;
	int point = -1;
	int len = _strlen(s);


	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			point = i;
			break;
		}
	}

	if (point >= 0)
	{
		return (point);
	}
	else
	{
		return NULL;
	}
}
