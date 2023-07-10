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
	unsigned int i;
	char *p;

	if (size <= 0)
		return (NULL);

	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	p[i] = '\n';

	return (p);
}
