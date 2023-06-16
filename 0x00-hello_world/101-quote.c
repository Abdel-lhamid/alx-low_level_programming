#include <unistd.h>

/**
 * main - writes the required message to the standard error
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	return (1);
}
