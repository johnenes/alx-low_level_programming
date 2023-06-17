#include <stdio.h>
/**
 * main - Entry point
 * Description: The progam that print all possible
 * different combination of two digits
 * the number must be different 
 * 01 and 10 are considered the same combination 
 * of two digit 0 and 1
 * print only the smallest combination of the two digit
 * use only putchar function max of five usage
 * all the code be in the main  function
 * no use of type char
 * Return: 0
 */

int  main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i +1 ; j < 10; j++)
		{
			putchar (i + '0');
			putchar (j + '0');
			if (i != 8 || j != 9)
			{
				putchar (',');
				putchar (' ');

			}
		}
	}

	return (0);
}
