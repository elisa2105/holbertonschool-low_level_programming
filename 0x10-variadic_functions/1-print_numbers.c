#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @n:number of arguments
 * @...: arguments
 * @separator: separator between numbers
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list list_var;
va_start(list_var, n);
for (; i < n; i++)
{
printf("%d", va_arg(list_var, int));
if (separator != NULL && i != n - 1)
printf("%s", separator);
}
va_end(list_var);
printf("\n");
}
