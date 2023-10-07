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
        int x = 48;
        int y = 49;

        while (x <= 56)
        {
                while (y <= 57)
                {
                        if (y > x)
                        {
                                putchar(x);
                                putchar(y);
                                if (x != 56 || y != 57)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                        y++;
                }
                x++;
        }
        putchar('\n');
        return (0);
}
