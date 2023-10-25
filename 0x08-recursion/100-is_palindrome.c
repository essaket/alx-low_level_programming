#include "main.h"

/**
 * strlen_palindrome - function that return the length of a string
 *
 * @s: input pointer of function
 *
 * Return: length of string
 */

int strlen_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (strlen_palindrome(s + 1) + 1);
}

/**
 * compare_char - compare a character
 *
 * @s: input pointer of function
 * @x: input of function
 * @y: input of function
 *
 * Return: 0 for success
 */

int compare_char(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y + 1)
			return (1);
		return (compare_char(s, x + 1, y - 1) + 0);
	}
	return (0);
}

/**
 * is_palindrome - function checked if a string is a palindrome or not
 *
 * @s: input pointer of function
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_char(s, 0, strlen_palindrome(s) - 1));
}
