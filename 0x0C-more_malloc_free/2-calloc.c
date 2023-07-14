#include"main.h"
#include <stdlib.h>

/**
 * _calloc - unction that allocates memory for an array, using malloc
 * @nmemb: size
 * @size: size of bytes
 * Return: the pointer to calloc string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
