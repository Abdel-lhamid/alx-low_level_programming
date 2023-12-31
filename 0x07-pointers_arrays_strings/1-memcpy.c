#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the destination where the content will be copied
 * @src: the table tha will be copied
 * @n: the number of bytes to copy
 * Return: the dest table
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
