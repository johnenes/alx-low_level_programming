#include<stdio.h>
/**
 * main  - Entry  point
 * Description: a program that prints all possible combinations of single-digit numbers
 * Return: 0
 */
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}

	return (0);
}
