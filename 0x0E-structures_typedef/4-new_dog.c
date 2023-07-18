#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - like strlen in string.h
 * @s: string to get length of
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * _strcpy - copies string from y to x
 *
 * @x: pointer to destination of string
 * @y: pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *x, char *y)
{
	char *a = x;

	while (*y)
		*a++ = *y++;
	*a = '\0';
	return (x);
}

/**
 * new_dog - makes a new dog, memory and all
 * @name: name to create mem and assign to for dog
 * @age: age to assign to for dog
 * @owner: owner to create mem and assign to for dog
 *
 * Return: pointer to new dog_t (struct dog)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_d;
	char *cname, *cowner;

	n_d = malloc(sizeof(dog_t));
	if (n_d == NULL)
		return (NULL);
	if (name == NULL)
		n_d->name = NULL;
	else
	{
		cname = malloc(_strlen(name) + 1);
		if (n_d->name == NULL)
		{
			free(cname);
			free(n_d);
			return (NULL);
		}
		n_d->name = _strcpy(cname, name);
	}
	if (owner == NULL)
		n_d->owner = NULL;
	else
	{
		cowner = malloc(_strlen(owner) + 1);
		if (n_d->owner == NULL)
		{
			free(cowner);
			free(n_d);
			return (NULL);
		}
		n_d->owner = _strcpy(cowner, owner);
	}
	n_d->age = age;
	return (new_d);
}
