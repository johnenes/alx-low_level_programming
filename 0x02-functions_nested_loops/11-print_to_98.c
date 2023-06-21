#include "main.h"
/**
 * print_to_98 - Prints natural numbers from n to 98
 * @n: The starting number
 */

 void print_to_98(int n);
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
_putchar("%d", n);
if (n != 98)
_putchar(", ");
}
}
else
{
for (; n >= 98; n--)
		{
_putchar("%d", n);
if (n != 98)
_putchar(", ");
}
}

_putchar("\n");
}
