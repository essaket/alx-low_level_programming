#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 *
 * @separator - input pointer of function
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

	va_start(ps, n);

	while (i--)
	{
		pnt = va_arg(ps, char *);
		printf("%s", str ? str : "(nil)";
	}
	printf("\n");
	va_end(ps);
}
