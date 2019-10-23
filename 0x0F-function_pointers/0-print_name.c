#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints buffer in hexa
 * @name: name to print
 * @f  : pointer to the function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
