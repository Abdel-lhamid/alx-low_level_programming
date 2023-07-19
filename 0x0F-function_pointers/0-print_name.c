#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the name to print
 * @f: the function to apply to name befor we print
 *
 */
void print_name(char *name, void (*f)(char *))
{
	char *nametoprint = f(name);
	int i = 0;

	while (nametoprint != '\n)
	{
		_putchar(nametoprint[i]);
		i++;
	}
	_putchar('\n');
}
