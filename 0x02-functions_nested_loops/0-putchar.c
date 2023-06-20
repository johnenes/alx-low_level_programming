#include "main.h"
/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
void print_string_putchar();

int main(void)
{
const char *message = "_putchar";
print_string_putchar(message);
_putchar('\n');
return (0);
}

/**
 *print_string_putchar -user defined
 *@str:argument, which represents a pointer to a string
 */
void print_string_putchar(const char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;

}
}
