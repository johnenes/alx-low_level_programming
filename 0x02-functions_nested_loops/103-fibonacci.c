#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int prev = 1, curr = 2, sum = 0, temp;

    while (curr <= 4000000)
    {
        if (curr % 2 == 0)
            sum += curr;

        temp = curr;
        curr += prev;
        prev = temp;
    }

    printf("%lu\n", sum);

    return 0;
}

