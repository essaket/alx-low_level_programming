#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * @n: checks input of function
 *
 * Return: 0 for success
 */

int main(long int n)
{
	long int x, y, z;

	while (n % 2 == 0)
	{
		z = 2;
		n /= 2;
	}

	for (x = 3; x <= sqrt(n); x + 2)
	{
		while (n % x == 0)
		{
			z = x;
			n /= x;
		}
	}
	if (n > 2)
		z = n;
	printf("%ld\n", z);

	return (0);
}
