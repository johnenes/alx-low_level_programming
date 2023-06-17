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

			/* Print tens digit of the first number */
			putchar(tens1 + '0');
			/* Print ones digit of the first number */
			putchar(ones1 + '0');
			/* Print a space */
			putchar(' ');

			/* Print tens digit of the second number */
			putchar(tens2 + '0');
			/* Print ones digit of the second number */
			putchar(ones2 + '0');
			/* Print a comma */
			putchar(',');
			/* Print a space */
			putchar(' ');
		}
	}

	return (0);
}
