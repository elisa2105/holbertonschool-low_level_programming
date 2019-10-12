#include <stdio.h>
#include <stdlib.h>
/**
 * main - result of the multiplication for two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 and error if it dooes not receive any argument
*/
int main(int argc, char *argv[])
{
int a, b;
if (argc < 2)
{
printf("Error\n");
return (1);
}
if (argc == 2)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
}
