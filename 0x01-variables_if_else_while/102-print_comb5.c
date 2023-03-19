#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
    int n1, n2, m1, m2;

    for (n1 = 0; n1 <= 9; n1++)
    {
        for (n2 = 0; n2 <= 9; n2++)
        {
            for (m1 = n1; m1 <= 9; m1++)
            {
                for (m2 = (m1 == n1 ? n2 + 1 : 0); m2 <= 9; m2++)
                {
                    putchar(n1 + '0');
                    putchar(n2 + '0');
                    putchar(' ');
                    putchar(m1 + '0');
                    putchar(m2 + '0');
                    if (n1 != 9 || n2 != 8 || m1 != 9 || m2 != 9)
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
