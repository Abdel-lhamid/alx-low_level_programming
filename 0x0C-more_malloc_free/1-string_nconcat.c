#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of the malloc
 * Return: the pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second
 * @n: n bytes to concat from s2
 * Return: the pointer of the concatinated string
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *ptr;
	unsigned int lenptr;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	lenptr = strlen(s1) + n + 1;
	ptr = malloc_checked(lenptr);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';

	return (ptr);
}
