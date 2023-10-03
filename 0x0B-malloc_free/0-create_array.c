#include "main.h"
/**
 * create_array - function for creating array
 * @size: size of array
 * @c: character storing the aarray
 * Return: pointer to  the array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
arr = malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;
return (arr);

}
