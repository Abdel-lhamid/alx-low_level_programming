#include <stdio.h>


/**
 * main - a script that prints numbers of base 16
 * Return: 0
 */
int main(void)
{
	int num;
	char l;

	for (num = 0 ; num < 10 ; num++)
	{
		printf("%d", num);
	}

	for (l = 'a' ; l <= 'f' ; l++)
	{
		putchar(l);
	}

	printf("\n");

	return (0);
}
