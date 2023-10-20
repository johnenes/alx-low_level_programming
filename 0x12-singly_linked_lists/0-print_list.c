#include "main.h"
/**
 * size_t print_list - prints all the elements of element
 * @list_t: list element
 * @pointer: list pointer
 * Return: node
 */


size_t print_list(const list_t *h)
{
	size_t node_count = 0;
       	
	while (h != NULL)
	{
	       	if (h->str == NULL)
	       	{
			printf("[0] (nil)\n");
		}
		else
		{
		       	printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		node_count++;
	}
	return (node_count);
}