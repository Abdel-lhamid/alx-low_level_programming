#include "main.h"

/**
 * *_strcat
 * @dest: where the content of the will be concatinated
 * @src: the second text that will be added to dest
 */
char *_strcat(char *dest,char *src);
{
	int i,j;

	for (i = 0; dest[i] != '\0'; i++);

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	i++;
	dest[i] = '\0';

	return (dest);
}
