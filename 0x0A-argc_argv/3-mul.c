#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 *
 * @argc: input size of argument
 * @argv: input array of argument
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	unsigned int x;

	if (argc == 3)
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
