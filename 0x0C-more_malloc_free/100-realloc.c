#include "main.h"

#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc -  function that reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc;
 * @old_size:  the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: a pointer to a newly allocate space
 */




void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{

if (new_size == 0 && ptr != NULL)
{

free(ptr);
return (NULL);
}

if (ptr == NULL)
ptr = malloc(new_size);

if (new_size == old_size)
return (ptr);

free(ptr);
ptr = malloc(new_size);

return (ptr);

}
