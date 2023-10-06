#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: prints the lowercase alphabet in reverse
 *
 *  Return: Always 0 for success
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
