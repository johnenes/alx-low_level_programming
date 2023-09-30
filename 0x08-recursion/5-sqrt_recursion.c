#include "main.h"
int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - return the natural Square root of a  number
 * @n: number to calculate the square root
 * Return: the reaulting square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));

}

/**
 * actual_sqrt_recursion -recurses to find the natural number
 * square root a number
 * @n: number to calculate the square root a
 * @i: iterator
 * Return: the resulting square root
 */

int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
