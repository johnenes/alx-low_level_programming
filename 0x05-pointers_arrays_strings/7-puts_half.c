#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str)
{
	int  i;
	int length = strlen(str);
	int start_index;

	/* Calculate the start index for the second half of the string */
	if (length % 2 == 0)
		start_index = length / 2;
	else
		start_index = (length - 1) / 2;

	/* Print the second half of the string */
	for (i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}

	/* Print a new line */
	putchar('\n');
}
