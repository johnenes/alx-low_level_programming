#include <stdio.h>

/**
 * _strncpy - Copies a string, up to n bytes.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: Pointer to the resulting string.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	/* Copy characters from src to dest, up to n bytes */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* If src has fewer than n characters, pad dest with null bytes */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return dest;
}

