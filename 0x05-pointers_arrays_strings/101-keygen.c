#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 *	for the program 101-crackme.
 *
 * Return: 0 for success
 */

int main(void)
{
	int x;
	char c;

	srand(time(NULL));
	while (x <= 2645)
	{
		c = rand() % 128;
		x += c;
		printf("%c", c); /* or putchar(c);*/
	}
	printf("%d", 2772 - x);

	return (0);
}
