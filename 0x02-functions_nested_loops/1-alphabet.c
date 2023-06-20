#include "main.h"
/**
 * main - Entry Point
 * description: prints the alphabet, in lowercase
 * Return: 0
 */


void print_alphabet(void);


int main(void)
{
print_alphabet();
return (0);
}

/**
 * print_alphabet - user defined function
 * description: this function process all the letters
*/

void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
_putchar('\n');
}
}
