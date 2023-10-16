#include "main.h"

/**
 * _strncpy - exactly like stncpy
 * @dest: destination
 * @src: the source string we want to copy
 * @n: the amount of char we want to copy
 * Return: the dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
