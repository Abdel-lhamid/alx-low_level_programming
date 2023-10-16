#include "main.h"


/**
 * *_strcpy - coppit the string src to dest
 * @src: the source string
 * @dest: the destination string
 * Return: the destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len = _strlen(src);

	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
