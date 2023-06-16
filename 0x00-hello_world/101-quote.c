#include <unistd.h>
#include <string.h>
/**
 * main - writes the required message to the standard error
 * Return: 1
 */
int main(void)
{
	char *err = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, err, strlen(err));
	return (1);
}
