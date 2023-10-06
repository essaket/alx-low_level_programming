#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: printf alphabet in lowercase then in uppercase
 *
 *  Return: Always 0 for Success
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/* print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	/* print A - Z*/
	while (CH <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
