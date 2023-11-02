#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * digit - function that check if number is digit or not
 * @c: input of function
 * Return: 1 if is digit and 0 if not
 */

int digit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * len - function that returns the length of a string
 * @s: input string of function
 * Return: lenght of a string
 */

int len(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * mul - function that multiple two number string
 * @s1: input first number of function
 * @s2: input second number of function
 * Return: multiple of two number
 */

char *mul(char *s1, char *s2)
{
	char *r;
	int l1, l2, a, b, c, x;

	l1 = len(s1);
	l2 = len(s2);
	r = malloc(a = x = l1 + l2);
	if (!r)
		printf("Error\n"), exit(98);
	while (a--)
		r[a] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!digit(s1[l1]))
		{
			free(r);
			printf("Error\n"), exit(98);
		}
		a = s1[l1] - '0';
		c = 0;

		for (l2 = len(s2) - 1; l2 >= 0; l2--)
		{
			if (!digit(s2[l2]))
			{
				free(r);
				printf("Error\n"), exit(98);
			}
			b = s2[l2] - '0';

			c += r[l1 + l2 + 1] + (a * b);
			r[l1 + l2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			r[l1 + l2 + 1] += c;
	}
	return (r);
}


/**
 * main - program that multiple two number string
 * @argc: input argument of function
 * @argv: input array argument of function
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	char *r;
	int a, c, x;

	if (argc != 3)
		printf("Error\n"), exit(98);

	x = len(argv[1]) + len(argv[2]);
	r = mul(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < x)
	{
		if (r[c])
			a = 1;
		if (a)
			_putchar(r[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
}
