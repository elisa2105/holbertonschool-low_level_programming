#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints buffer in hexa
 * @name: the address of memory to print
 * @siz  : the size of the memory to print
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return; 
f(name);
}
