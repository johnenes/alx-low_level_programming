#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array of nmemb
 * @nmemb: number of element
 * @size: size of byte
 *
 *
 * Return: pointer to the allocated memory
 * if nmemb or size is o , return NULL
 * if malloc fail, return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{


char *output;
unsigned int i;

if (nmemb == 0 || size == 0)
return (0);
output =  malloc(nmemb * size);

if (output == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
output[i] = 0;

return (output);


}
