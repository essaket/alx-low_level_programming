#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that adds positive numbers
 * @argc: input size of argument
 * @argv: input array of argument
 * Return: 0 for sucess
 */

int main(int argc, char *argv[])
{
	int x = 0;
	char *p;

	while (--argc)
	{
		for (p = argv[argc]; *p; p++)
			if (*p < 48 || *p > '9')
				return (printf("Error\n"), 1);

		x += atoi(argv[argc]);
	}
	printf("%d\n", x);

	return (0);
}
