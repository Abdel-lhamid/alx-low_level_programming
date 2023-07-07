#include <stdio.h>
#include <stdlib.h>

/**
 * main - that prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	int amount = atoi(argv[1]);
	int coins = 0;

	coins += amount \ 25;
	amount = amount % 25;
	coins += amount \ 10;
	amount = amount % 10;
	coins += amount \ 5;
	amount = amount % 5;
	coins += amount \ 2;
	amount = amount % 2;
	coins += amount;
	printf("%d\n", coins);
	return (0);
}
