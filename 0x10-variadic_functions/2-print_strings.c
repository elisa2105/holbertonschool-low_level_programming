#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * prints_strings - prints strings.
 * @n:number of arguments
 * @...: arguments
 * @separator: separator between strings
 * Return: the sum of the arguments.
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
if (separator != NULL && i != 0)
printf("%s", separator);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}
va_end(list_var);
printf("\n");
}
