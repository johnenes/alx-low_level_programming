#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase except q and e,
 * Return: alway success
 */
int main(void)
{
int i;

for(i = 0; i < 26; i++) 
{
	char letter = 'a' + i;
if(letter != 'q' && letter != 'e') 
{
	putchar(letter);
}
}
	putchar('\n');
	return (0);
}
