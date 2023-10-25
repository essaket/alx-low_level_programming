#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: input of function
 * @x: input of function
 *
 * Return: a square root
 */

int calcul_sqrt_recursion(int n, int x);

int _sqrt_recursion(int n)
{
	return (calcul_sqrt_recursion(n, 1));
}

/**
 * calcul_sqrt_recursion - function that calcul the natural square root of n
 *
 * @n: input of function
 * @x: input of function
 *
 * Return: calcul of natural square root of n
 */

int calcul_sqrt_recursion(int n, int x)
{
	if (x * x == n)
		return (x);

	else if (x * x < n)
		return (calcul_sqrt_recursion(n, x + 1));

	else
		return (-1);

}
