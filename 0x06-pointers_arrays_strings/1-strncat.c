#include "main.h"

/**
 * _strncat - concatinate 2 string only n elements of src
 * @dest: first string
 * @src: second string
 * @n: elements from src to concat
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] ; i++);

	for (j = 0; j < n || src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
