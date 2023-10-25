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
	int i = 0;

	if (i * i == n)
		return (i);

	else if (i * i < n)
	{
		i++;
		return (_sqrt_recursion(n));
	}
}
