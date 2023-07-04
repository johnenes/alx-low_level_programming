#include <stdio.h>

/**
 * _strpbrk - Searches a string s for any of the bytes in accept.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the bytes to be searched for.
 *
 * Return: Pointer to the first occurrence of
 * a byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
return (s);
a++;

}
s++;
}
return (NULL);
}

