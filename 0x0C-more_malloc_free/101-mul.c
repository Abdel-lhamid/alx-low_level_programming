#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that multiplies two positive numbers.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j;
	unsigned int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < 3; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%u\n", num1 * num2);
	return (0);
}
