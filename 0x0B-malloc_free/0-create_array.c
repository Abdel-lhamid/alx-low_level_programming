#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	if (size < 1)
		return (NULL);
	char *p = malloc(size);
	p[0] = c;

	return (p);
