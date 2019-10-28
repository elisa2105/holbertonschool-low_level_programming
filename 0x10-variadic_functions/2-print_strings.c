#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings.
 * @n: cant arguments
 * @separator: separator between strings
 * Description: print all its parameters..
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
va_list list_var;
unsigned int i = 0;
va_start(list_var, n);
for (; i < n; i++)
{
str = va_arg(list_var, char *);

if (str == NULL)
str = "(nil)";

printf("%s", str);

if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
va_end(list_var);
printf("\n");
}
