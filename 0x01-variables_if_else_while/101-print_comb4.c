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
	int x = 48, y = 49, z = 50;

	while (x <= 57)
	{
		while (y <= 57)
		{
			while (z <= 57)
			{
				if (x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 55 || y != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			y++:
		}
		x++;
	}
	putchar('\n');
	return (0);
}
