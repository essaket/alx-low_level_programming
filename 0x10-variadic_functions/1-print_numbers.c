#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 *
 * @separator: input pointer of function
 * @n: input number of parameters of function
 * @...: input numbers of function
 *
 * Return: a void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list ap;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int), i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
