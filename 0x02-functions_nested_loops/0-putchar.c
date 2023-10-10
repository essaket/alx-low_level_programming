#include "main.h"
#include <string.h>

/**
 *  main - Entry point
 *
 *  Description: program that print _putchar.
 *
 *  Return: Always 0 for Success
 */

int main(void)
{
	char CH[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(CH[i]);
	}
	putchar('\n');

	return (0);
}
