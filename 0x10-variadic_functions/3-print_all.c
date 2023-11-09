#include "variadoc_functions.h"

/**
 * f_char - formats character
 *
 * @separator: a string
 * @lt: argument of function
 */

void f_char(char *separator, va_list lt)
{
	printf("%s%c", separator, va_arg(lt, int));
}

/**
 * f_int - formats integers
 *
 * @separator: a string
 * @lt: argument of function
 */

void f_int(char *separator, va_list lt)
{
	printf("%s%d", separator, va_arg(lt, int));
}

/**
 * f_float - formats float
 *
 * @separator: a string
 * @lt: argument of function
 */

void f_float(char *separator, va_list lt)
{
	printf("%s%f", separator, va_arg(lt, int));
}

/**
 * f_string - formats string
 *
 * @separator: a string
 * @lt: argument of function
 */

void f_string(char *separator, va_list lt)
{
	char *pnt;

	pnt = va_arg(lt, char*);
	if (pnt == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s%s", separator, pnt);
}

/**
 * print_all - function that print anything
 *
 * @format: input pointer of function
 * @...: input numbers of function
 *
 * Return: a void
 */

void print_all(const char * const format, ...)
{
	int i, j;
	char *separator = "";
	va_list lt;
	types_l typesf[] = {
		{"c", f_char},
		{"i", f_int},
		{"f", f_float},
		{"s", f_string},
		{NULL, NULL}
	};

	va_start(lt, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (typess[j].types)
		{
			if (format[i] == typess[j].types[0])
			{
				typess[j].f(separator, lt);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(lt);
}
