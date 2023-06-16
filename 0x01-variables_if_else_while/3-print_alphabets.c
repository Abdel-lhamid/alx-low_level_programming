#include <stdio.h>


/**
 * main - a script that writes the alphabets
 * uppercase and lower, lower first
 * Return: 0
 */

int main(void) 
{
	char l;
	char L;

	for (l = 'a' ; l <= 'z' ; l++)
	{
		putchar(l);
	}

	for (L = 'A' ; L <= 'Z' ; L++)
	{
		putchar(L);
	}

	putchar('\n');
	
	return (0);
}
