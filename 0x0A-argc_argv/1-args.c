#include "main.h"

/**
 * main - program that prints the number of arguments passed into it
 *
 * @argc: input size of arguments
 * @argv: input array of arguments
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
