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
	int x, div3, div5, sum3, sum5;

	div3 = 1024 / 3;
	div5 = 1024 / 5;
	sum3 = 0;
	sum5 = 0;
	for (x = 0; x < div3; x++)
		sum3 += x * 3;
	for (x = 0; x < div5; x++)
		sum5 += x * 5;
	printf("%d\n", sum3 + sum5);

	return (0);
}
