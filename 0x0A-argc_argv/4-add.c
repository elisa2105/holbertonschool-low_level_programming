#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - result of add two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 and error if the numbers is not digit
 */
int main(int argc, char *argv[])
{
int cont;
int a;
if (argc < 2)
{
printf("0\n");
return (0);
}
else
{
for (cont = 1; cont < argc; cont++)
{
if (isdigit(*argv[cont]) && argv[cont] != '\0')
a += atoi(argv[cont]);
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", a);
}
return (0);
}
