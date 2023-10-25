#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: input of function
 *
 * Return: a square root
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (n % n != 0)
		return (-1);
	else
		x = n / n;

		return (x);
}
