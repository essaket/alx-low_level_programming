#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 *
 * @separator: input pointer of function
 * @n: input number of paramters of function
 * @...: input numbers of function
 *
 * Return: a void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	char *pnt;
	va_list ps;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	va_start(ps, n);

	while (i--)
	{
		pnt = va_arg(ps, char *);
		printf("%s%s", pnt ? pnt : "(nil)", i ? (separator ? separator : "") : "\n");
	}
	va_end(ps);
}
