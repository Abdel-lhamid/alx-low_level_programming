#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_int - prints int
 * @ap: va_list
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_char - prints char
 * @ap: va_list
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * print_float - prints float
 * @ap: va_list
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints string
 * @ap: va_list
 */
void print_string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - function that prints anything.
 * @format: an array of chars signifying which data type to print
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	char *separator = "";


	funct_t funcs[] = { {'c', print_char},
			      {'i', print_int},
			      {'f', print_float},
			      {'s', print_string},
			      {'\0', NULL} };

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (funcs[j].l != '\0')
		{
			if (funcs[j].l == format[i])
			{
				printf("%s", separator);
				funcs[j].func(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
