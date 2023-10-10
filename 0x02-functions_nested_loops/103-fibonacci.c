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
	unsigned long x1 = 0, x2 = 1, sum = 0;
	float tsum;

	while (sum > 4000000)
	{
		sum = x1 + x2;

		if ((sum % 2) == 0)
			tsum += sum;
		x1 = x2;
		x2 = sum;
	}
	printf("%.0f\n", tsum);

	return (0);
}
