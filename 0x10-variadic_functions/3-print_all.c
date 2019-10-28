#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: format of the arguments
 * @...: arguments
 * Return: the sum of the arguments.
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *str;
va_list list_var;
va_start(list_var, format);
while (format && format[i] !='\0')
{
switch (format[i++])
{
case 'c':
printf("%c", va_arg(list_var, int));
break;
case 'i':
printf("%d", va_arg(list_var, int));
break;
case 'f':
printf("%f", va_arg(list_var, double));
break;
case 's':
str = va_arg(list_var, char*);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
break;
}
if (format[i] != '\0')
printf(", ");
}
printf("\n");
va_end(list_var);
}
