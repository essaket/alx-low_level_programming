#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that sum two integers
 *
 * @a: input of function
 * @b: input of function
 *
 * Return: sum of two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that difference two integers
 *
 * @a: input of function
 * @b: input of function
 *
 * Return: difference of two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that product two integers
 *
 * @a: input of function
 * @b: input of function
 *
 * Return: product of two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that get the result of the division of two integers
 *
 * @a: input of function
 * @b: input of function
 *
 * Return: division of two integers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that remainder of the division of two integers
 *
 * @a: input of function
 * @b: input of function
 *
 * Return: module of two integers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
