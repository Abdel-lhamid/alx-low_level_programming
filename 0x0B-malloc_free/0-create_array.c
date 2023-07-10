#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array and initialzeit
 * @size: the size of the array
 * @c: the char
 * Return: p or null
 *
 */
char *create_array(unsigned int size, char c)
{
	if (size <= 0)
		return (NULL);
	int i;
	char *p;

	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
