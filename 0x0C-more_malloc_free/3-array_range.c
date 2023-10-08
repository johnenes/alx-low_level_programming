#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integer
 * @min: minimum value
 * @max: maximum value
 * Return: int pointer to the allocated memory
 */
int *array_range(int min, int max)
{
int i, size;

int *output;

if (min > max)
return (NULL);

size =  max - min + 1;

output = malloc(sizeof(int) * size);

if (output == NULL)
return (NULL);

for (i = 0; min  <= max; i++)
output[i] = min++;
return (output);
}
