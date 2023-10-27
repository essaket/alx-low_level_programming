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
	int x, i;

	if (argc > 1)
	{
		for(i = 0, i < argc, i++)
		{
			if (*argv < '0' || *argv > '9')
			{
				printf("Error\n");
				return (1);
			}
			X += atoi(arg[i]);
		}
	}
	else
		printf("0\n");
	printf("%d\n", x);

	return (0);
}
