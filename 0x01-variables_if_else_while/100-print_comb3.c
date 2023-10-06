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
	int x = 48, y = 49;

	for ( ; x <= 56 ; )
	{
		for ( ; y <= 57 ; )
		{
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
