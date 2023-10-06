#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: prints all single digit numbers of base 10 starting from 0
 *
 *  Return: Always 0 for success
 */

int main(void)
{
	int var = 0;

	while (var <= 9)
	{
		/*convert var to ASCII*/
		putchar(var + '0');
		var++;
	}
	putchar('\n');

	return (0);
}
