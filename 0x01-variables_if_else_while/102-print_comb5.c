#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all possible different combinations of 3 digits.
 * Numbers must be separated by commas and a space.
 * The 3 digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination.
 * print only the smallest combination of 3 digits.
 * Numbers should be printed in ascending order.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 6 times.
 * You are not allowed to use any variables of type `char`.
 * Return: 0
 */
int main(void)
{
    int i, j;

    for (i = 0; i <= 99; i++)
    {
        for (j = i; j <= 99; j++)
        {
            int tens1 = i / 10;
            int ones1 = i % 10;
            int tens2 = j / 10;
            int ones2 = j % 10;

            putchar((tens1 / 10) + '0');
            putchar((tens1 % 10) + '0');
            putchar(ones1 + '0');
            putchar(' ');

            putchar((tens2 / 10) + '0');
            putchar((tens2 % 10) + '0');
            putchar(ones2 + '0');
            putchar(',');
            putchar(' ');
        }
    }

    return 0;
}
