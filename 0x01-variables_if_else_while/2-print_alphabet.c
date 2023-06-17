#include<stdio.h>
/**
*main - Entry point
* Description: A program that prints the alphabet 
* In lowercase using the putchar 
*Return: 0
*/

int main(void)
{
int i;

for (i = 0; i < 26; i++)
{
	putchar('a' + i);
}

	putchar('\n');

return (0);
}
