#include<stdio.h>
/**
 * main - Entry point
 * Description: a program that prints the alphabet in lowercase using the putchar 
 * Return: 0
 */
int main()
{	
	char letter;

	for(letter = 'a';letter <='z'; letter++)
		putchar(letter);


	return (0);
}
