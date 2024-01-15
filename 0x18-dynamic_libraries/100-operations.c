#include <stdio.h>

/**
 * add - add two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - mul two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - div two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */

int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by Zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - mod two numbers
 * @a: first number
 * @b: second number
 * Return: the result
 */

int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by Zero\n");
		return (0);
	}
	return (a % b);
}
