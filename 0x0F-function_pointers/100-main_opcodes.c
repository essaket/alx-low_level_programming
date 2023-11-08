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
	int x;
	char *pnt = (char *)main;

	if (argc != 2)
	{
		printf("Erroe\n");
		exit(1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	do{
		printf("%02hhx%s", *pnt++, x ? " " : "\n");
	}while (--x);

	return (0);
}
