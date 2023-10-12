#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - adding all the argument value
 * @n: number of argument to be added
 * Return: 0
 */


int sum_them_all(const unsigned int n, ...)
{
int sum  = 0;
unsigned int i;
va_list list;


va_start(list, n);

for (i = 0; i < n; i++)
{
sum += va_arg(list, int);
}
va_end(list);
return (sum);
}
