#include <stdio.h>

/**
 * _memset - Fills the first n bytes of the memory
 * area pointed to by s with the constant byte b.
 * @s: Pointer to the memory area.
 * @b: Constant byte value to fill.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p++ = b;
		n--;
	}

	return (s);
}
