#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: printf all alphabet letters
 *
 *  Return: Always 0 for Success
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
