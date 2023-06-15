#include <stdio.h>
#include <unistd.h>
/** 
*main - A c pogram that print a line to standard error
*Return: 1 (Failure)
*/
int main(void)
{
write(2,"and that piece of art is useful\"  - Dora Korpar, 2015-10-19\n", 58);
return (1); 
}
