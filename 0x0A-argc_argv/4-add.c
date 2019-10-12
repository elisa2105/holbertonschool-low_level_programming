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
int a = 0;
int s;
if(argc < 2)
{
printf("0\n");
return (0);
}
for (cont = 1; cont < argc; cont++)
{
 for(s = 0; argv[cont][s] != '\0'; s++)
{
if(!(isdigit(argv[cont][s])))
{
printf("Error\n");
return (1);
}
}
a += atoi(argv[cont]);
}
printf("%d\n", a);
return (0);
}
