#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters.
 * @n:number of arguments
 * @...: arguments
 * Return: the sum of the arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
int s = 0;
unsigned int x = 0;
va_list list_var;
va_start(list_var, n);
if (n == 0)
return (0);
for (; x < n; x++)
{
s += va_arg(list_var, int);
}
va_end(list_var);
return (s);
}
