#include "main.h"
#include<unistd.h>

/* _putchar is a function take an argument*/
/* char c is paramenter*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/* print_string_putchar  - is a function declaration*/
/* description - a function called*/
void print_string_putchar(const char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;

}
}
