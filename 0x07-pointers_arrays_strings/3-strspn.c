#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring
 * consisting only of bytes from accept.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the bytes to be matched.
 *
 * Return: The number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;

while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
count++;
break;
}
a++;
}

if (*a == '\0')
break;

s++;
}

return (count);
}

