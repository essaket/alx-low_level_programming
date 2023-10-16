#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: input of function
 * @b: input of function
 *
 * Return: a void
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
