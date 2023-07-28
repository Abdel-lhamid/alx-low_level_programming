#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>


/**
 * struct list_struct - singly linked list
 * @str: string
 * @len: length of the string
 * @next: points to the next node
 *
 */
typedef struct list_struct
{
	char *str;
	unsigned int len;
	struct list_struct *next;
} list_t;

size_t print_list(const list_t *h);
