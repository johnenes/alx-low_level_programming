#include "main.h"

/**
 * print_number - Prints a number
 * @n: The number to be printed
 */
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) * (n < 0 ? -1 : 1) + '0');
}

/**
 * print_to_98 - Prints natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			print_number(n);

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			print_number(n);

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	_putchar('\n');
}
