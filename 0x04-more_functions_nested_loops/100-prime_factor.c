#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: 0 for success
 */

int main(void)
{
	long int x, z;
	long int n = 612852475143;

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
