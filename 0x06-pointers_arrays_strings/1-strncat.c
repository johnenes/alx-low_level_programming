#include <stdio.h>

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: Pointer to the resulting string.
 */
char *_strncat(char *dest, const char *src, int n)
{
	char *ptr = dest;

	/* Move the pointer to the end of dest */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Copy characters from src to dest, up to n bytes */
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/* Add a terminating null byte */
	*ptr = '\0';

	return (dest);
}
