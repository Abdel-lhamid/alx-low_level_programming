#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies two numbers.
 * @argc: number of arguments
 * @argv: the table of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atio(argv[2]));
		return (0);
	}
}
