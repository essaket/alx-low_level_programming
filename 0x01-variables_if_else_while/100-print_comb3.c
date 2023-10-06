#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: prints all possible different combinations of two digits
 *
 *  Return: ALways 0 for Success
 */

int main(void)
{
	int x, y;

	for (x = 48 ; x <= 56 ; x++ )
	{
		for (y = 49 ; y <= 57 ; y++)
			if ( x != y && x < y)
			{
				putchar(x);
				putchar(y);
			}
			if (x != 56 && y != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
