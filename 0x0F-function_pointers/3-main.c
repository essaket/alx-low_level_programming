#include "3-calc.h"

/**
 * main - a program that calcule an operation
 *
 * @argc: input argc of arguments
 * @argv: input argv of arguments
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int (*op_result)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_result = get_op_func(argv[2]);

	if (!op_result)
	{
		printf("Error\n");
		exit(99);
	}

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_result(a, b));

	return (0);
}
