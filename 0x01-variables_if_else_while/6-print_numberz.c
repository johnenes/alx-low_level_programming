#include<stdio.h>
/**
 * main - program that prints the lowercase alphabet in reverse
 * Return: 0 (Success)
 */
int main() {
    int num = 0;
    
    while (num <= 9) {
        putchar('0' + num);
        putchar('\n');
        num++;
    }
    
    return 0;
}
