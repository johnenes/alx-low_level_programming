#include<stdio.h>
/**
*main:Entry point
*Description:" This progam prints the alphabet in lowercase
*use the putchar function"
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
