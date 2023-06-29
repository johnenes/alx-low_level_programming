#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Pointer to the resulting string.
 */
char *_strcat(char *dest, const char *src)
{
	char *ptr = dest;

	/* Move the pointer to the end of dest */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Copy characters from src to dest */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add a terminating null byte */
	*ptr = '\0';

	return (dest);
}

