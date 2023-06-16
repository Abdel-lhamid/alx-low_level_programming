#include <unistd.h>
#include <string.h>
/**
 * main - writes the required message to the standard error
 * Return: 1
 */
int main(void)
{
	char* error_message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
	write(STDERR_FILENO, error_message, strlen(error_message));
	return (1);
}
