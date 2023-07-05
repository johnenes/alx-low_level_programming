#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The double pointer to the string.
 * @to: The pointer to the char to be assigned.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

