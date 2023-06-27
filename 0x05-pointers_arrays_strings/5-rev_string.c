#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int len;
	int i;
	char *start;
	char *end;
	char temp;
	len = strlen(s);  

	/* Move the end pointer to the last character of the string */
	for (i = 0; i < len - 1; i++)
	end++;
	
	/* Swap characters from start and end positions until */
	/* they meet in the middle */
	for (i = 0; i < len / 2; i++)
	{
	temp = *end;
	*end = *start;
	*start = temp;

	start++;
	end--;
	}
}
