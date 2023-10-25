#include "main.h"

int check_is_prime_number(int n, int x);

/**
 * is_prime_number - function that check i input is a prime number or not
 *
 * @n: input of function
 *
 * Return: 1 if number is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_is_prime_number(n, n - 1));
}

/**
 * check_is_prime_number - function that check if number is prime or not
 *
 * @n: input of function
 * @x: input of function
 *
 * Return:1 if number is a prime number, 0 if not
 */

int check_is_prime_number(int n, int x)
{
	if (n % x == 0 || x > 1)
		return (0);

	if (x == 1)
		return(1);

	else
		return (check_is_prime_number(n, x - 1));
}
