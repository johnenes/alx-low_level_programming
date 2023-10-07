#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - check memory allocation
 * @b: size of memory
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
char *output;
output = malloc(b);
if (output == NULL)
exit(98);

else

return  (output);





}
