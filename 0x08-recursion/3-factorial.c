#include "main.h"
/**
 * factorial - funtion name
 * @n: function parameter
 * Return: a given factorial
 */
int factorial(int n)
{
if (n < 0)

return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
