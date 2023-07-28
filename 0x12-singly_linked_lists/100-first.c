#include <stdio.h>

/**
 * pre_main - Function to be executed before the main function.
 * It prints "You're beat! and yet, you must allow,...".
 * This function is executed automatically before the main function.
 */
void __attribute__((constructor)) pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
