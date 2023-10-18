#include "main.h"

/**
 * print_buffer - function that prints a buffer
 *
 * @b: input pointer of function
 * @size: input of function
 *
 * Return: 0 for success
 */

void print_buffer(char *b, int size)
{
	int i, j, x;

	x = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		j = size - x < 10 ? size - x : 10;/* this line like a if function*/
		printf("%08x: ", x);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + x + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + x + i);

			if (c < 32 || c > 132)
			{
				c = 46;
			}
			printf("%c", c);
		}
		printf("\n");
		x += 10;
	}
}
