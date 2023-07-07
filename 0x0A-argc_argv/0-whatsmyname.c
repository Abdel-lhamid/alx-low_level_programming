#include <stdio.h>

/**
 * main - a function to print the name of the file
 * argc: argument count
 * argv: argument vector
 *
 */

void main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
}
