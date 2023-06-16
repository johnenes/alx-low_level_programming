#include<stdio.h>
/**
 * main - Entry point 
 * Description:  program that prints the lowercase alphabet in reverse
 * return Aways 0
 */
 int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
