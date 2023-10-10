#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci
 *		starting with 1 and 2
 *
 * Return: always 0
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
