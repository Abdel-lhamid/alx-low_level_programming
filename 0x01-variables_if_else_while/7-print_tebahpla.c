#include <stdio.h>


/**
 * main - a script that writes the alphabets
 * Return: 0
 */
int main(void)
{
	char L;

	for (L = 'z' ; L >= 'a' ; L--)
	{
		putchar(L);
	}

	putchar('\n');

	return (0);
}
