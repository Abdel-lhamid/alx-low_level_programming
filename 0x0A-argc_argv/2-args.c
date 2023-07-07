#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
		ptintf("%s\n", argv[i]);
	return (0);
}
