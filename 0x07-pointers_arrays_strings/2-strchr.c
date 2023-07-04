#include <stdio.h>

/**
 * _strchr - Locates the first occurrence
 * of the character c in the string s.
 * @s: Pointer to the string to search.
 * @c: Character to locate.
 *
 * Return: Pointer to the first occurrence
 * of the character c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
if (*s == c)
return (s);

return (NULL);
}

