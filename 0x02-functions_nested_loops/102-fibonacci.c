#include "main.h"

/**
 * main - Entry point
 *
 * description: prints the first 50 Fibonacci
 *
 * return: always 0
 */

int main(void)
{
	int x;
	unsigned long x1 = 0, x2 = 1, sum;

	for (x = 0; x < 50; x++)
	{
		sum = x1 + x2;
		printf("%lu", sum);

		x1 = x2;
		x2 = sum;

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
