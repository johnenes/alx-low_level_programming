#include <stdio.h>
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
if (s == NULL)
return;

/* Calculate the length of the string */
int length;

length = 0;

while (s[length] != '\0')
length++;

/* Print the string in reverse */
for (int i = length - 1; i >= 0; i--)
printf("%c", s[i]);

printf("\n");  /* Print a new line */
}
