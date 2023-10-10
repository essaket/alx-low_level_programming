#include <stdio.h>
#include "main.h"

/**
 * main - program that computes and prints the sum of all the multiples
 *	of 3 or 5 below 1024
 *
 * Return: value of function
 */

int main(void)
{
	int x, sum;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			sum += x;
	}
	printf("%d\n", sum);

	return (0);
}
