#include<stdio.h>
/**
 * main - Entry Point
 * Description: The program print all possible
 * combination of a single digit numbers.
 * the number must be seperate by comma then
 * space between the number must be printed
 * in assending orderonly putchar function is a
 * llowed putchar use at a amaximum time through,
 * char type not allowd
 * Retrun: 0
 */
 void print_combine_(int n) 
{
	if (n > 9)
	{
		return;
	}
	putchar(n + '0');

	if(n < 10)
	{
		putchar(',');
		putchar(' ' );
		print_combine_(n + 1);
	}
}

int main ()
{
	print_combine_(0);
	putchar('\n');

	return (0);
 }

