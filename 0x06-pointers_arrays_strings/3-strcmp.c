#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: Negative value if s1 is less than s2, positive value if s1 is greater than s2, 0 if they are equal.
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return 0;
}
