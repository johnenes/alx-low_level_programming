#include<stdio.h>
/**
 * main - Entry point
 * Description: a program that prints the alphabet in lowercase using the putchar 
 * Return: 0
 */
int main() {
    int i;

    for (i = 0; i < 26; i++) {
        putchar('a' + i);
    }

    putchar('\n');

    return 0;
}
