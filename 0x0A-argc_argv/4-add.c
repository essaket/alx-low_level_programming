#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: input size of argument
 * @argv: input array of argument
 * Return: 0 for sucess
 */

int main(int argc, char *argv[])
{
	int z, i;
	unsigned int x, len;
	char *y;

	x = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			y = argv[i];

			while (*y)
				len++;

			for (z = 0; z < len; z++)
			{
				if (y[z] < '0' || y[z] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

			x += atoi(y);
			y++;
		}

		printf("%d\n", x);
	}
	else
		printf("0\n");

	return (0);
}
