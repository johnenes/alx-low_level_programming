#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number string.
 * @n2: The second number string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result string, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int i = len1 - 1;
    int j = len2 - 1;
    int k = size_r - 1;

    if (len1 + len2 >= size_r)
        return 0;

    while (i >= 0 || j >= 0 || carry)
    {
        int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
        int digit2 = (j >= 0) ? (n2[j] - '0') : 0;
        int sum = digit1 + digit2 + carry;

        carry = sum / 10;
        sum %= 10;
        r[k] = sum + '0';

        i--;
        j--;
        k--;
    }

    r[size_r - 1] = '\0';

    if (carry)
    {
        if (size_r <= 1)
            return 0;

        memmove(r + 1, r, strlen(r) + 1);
        r[0] = carry + '0';
    }

    return (r);
}

