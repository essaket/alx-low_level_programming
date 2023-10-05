#include <stdio.h>
#include <unistd.h>

/**
 *  main - Entry point
 *
 *  Description: A c prpgram that prints without printf and puts functions.
 *
 *  Return: Always 1 for Success
 *
 */

int main(void)
{
	char var[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, var, 59);
	return (1);
}
