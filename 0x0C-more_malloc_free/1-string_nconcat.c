#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - string concatnation
 * @s1: String 1 
 * @s2: String 2
 * @n: number of byte to concatenate from s2
 * Return: concatenating String
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
unsigned int i;
unsigned int s1_length = 0;
unsigned int s2_length = 0;


char *output;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
s1_length++;

for (i = 0; s2[i] != '\0'; i++)
s2_length++;


output = malloc (sizeof(char) * (s1_length + 1) + 1);
if (output == NULL)
return (NULL);
if (n >= s2_length)
{
for (i = 0; s1[1] != '\0'; i++)
output[i] = s1[i];

for (i = 0; s2[i] != '\0'; i++)
output[s1_length + i] = s2[i];

output[s1_length + i] = '\0';
}
else
{

for (i = 0; s1[i] != '\0'; i++)
output[i] = s1[i];

for (i = 0; i < n; i++)
output[s1_length + i] = s2[i];

output[s1_length + i] = '\0';
}
return (output);
}
