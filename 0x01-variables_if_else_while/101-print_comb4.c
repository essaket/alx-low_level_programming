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
	int x, y, z;

	for (x = 48; x <= 57; n++)
	{
		for (y = 49; y <= 57; y++)
		{
			for (z = 50; z <= 57; z++)
			{
				if (x < y && y < z)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (x != 55 || y != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
