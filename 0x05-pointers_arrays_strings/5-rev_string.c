#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	char *start;
	char *end;

	if (s == NULL || *s == '\0')
		return;

	 start = s;
	 end = s;

	/* Move the end pointer to the last character of the string */
	while (*end != '\0')
		end++;

	end--;

	/* Swap characters from start and end positions until they meet in the middle */
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}

