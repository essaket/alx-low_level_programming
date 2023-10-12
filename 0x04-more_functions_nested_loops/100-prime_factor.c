#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: 0 for success
 */

int main(void)
{
	long int n, x, y;

	n = 612852475143;
	while (n % 2 == 0)
	{
		y = 2;
		n /= 2;
	}

	for (x = 3; x <= sqrt(n); x += 2)
	{
		while (n % x == 0)
		{
			y = x;
			n = n / x;
		}
	}

	if (n > 2)
		y = n;

	printf("%ld\n", y);

	return (0);
}
