#include "function_pointers.h"


 /**
  * print_name: function that prints a name
  * @name: name to be printed
  * @f: a pointer to a function that prints a name
  * Return: no return.i
  */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);

}
