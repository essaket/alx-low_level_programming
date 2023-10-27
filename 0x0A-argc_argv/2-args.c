#include "main.h"

/**
 * main - prints all arguments it receives
 *
 * @argc: input size of argument
 * @argv: input array of argument
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
