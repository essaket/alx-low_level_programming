#include "main.h"

/**
 * main - entry point
 *
 * Description: a program that finds and prints the sum of the
 *		even-vakued terms.
 *
 * Return: Always 0
 */

int main(void)
{
	long x1 = 1, x2 = 2, sum = 0, tsum;

	while (1)
	{
		sum = x1 + x2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			tsum += sum;
		x1 = x2;
		x2 = sum;
	}
	printf("%ld\n", tsum);

	return (0);
}
