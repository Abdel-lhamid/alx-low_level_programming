#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>


typedef struct listint_t
{
	int *i;
	struct listint_t *next;
} listint_t


size_t print_listint(const listint_t *h);

#endif
