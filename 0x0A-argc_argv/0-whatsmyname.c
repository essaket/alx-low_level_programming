#include "main.h"

/**
 * main - program that prints it's name
 *
 * @argc: input size of argv
 * @argv: input pointer of function
 *
 * Return: 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%S\n", *argv);

	return (0);
}
