#include "function_pointers.h"

/**
 * main - a program that prints the opcodes
 *
 * @argc: input arguments of function
 * @argv: input argument of function
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int x, i = 0;
	char *pnt = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/**
	 *for (; i < x; i++)
	{
		printf("%.2hhx", pnt[i]);
		if (i < x - 1)
			printf(" ");
	}
	printf("\n");
	*/

	while (x--)
	{
		printf("%02hhx%s", *pnt++, x ? " " : "\n");
	}

	return (0);
}
