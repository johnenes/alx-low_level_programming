#include "main.h"
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
int main(void)
{
const char *message = "_putchar";
print_string_putchar(message);
_putchar('\n');
return 0;
}
