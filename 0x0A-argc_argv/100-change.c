#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to make change
 *              for an amount of money
 *
 * @argc: input size of argument
 * @argv: input array of argument
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, c = 0, m = atoi(argv[1]);
		int cent[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= cent[i])
			{
				c += m / cent[i];
				m = m % cent[i];
				if (m % cent[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", c);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
