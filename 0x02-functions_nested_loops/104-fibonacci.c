#include "main.h"

/**
 * main - Entry point
 *
 * Description: program that finds and prints the first 98 Fibonacci numbers,
 *		starting with 1 and 2.
 * Return: Always 0
 */

int main(void)
{
	unsigned long int i, x = 1, y = 2, l = 1000000000, x1, x2, y1, y2;

	printf("%lu", x);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", y);
		y += x;
		x = y - x;
	}

	x1 = (x / l);
	x2 = (x % l);
	y1 = (y / l);
	y2 = (y % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", y1 + (y2 / l));
		printf("%lu", y2 % l);
		y1 = y1 + x1;
		x1 = y1 - x1;
		y2 = y2 + x2;
		x2 = y2 - x2;
	}
	printf("\n");
	return (0);
}
