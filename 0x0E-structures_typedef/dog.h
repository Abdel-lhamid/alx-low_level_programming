#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog
 * @name: first
 * @age: second
 * @owner: third
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif