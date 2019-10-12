#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: unused
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
argc--;
printf("%d\n", argc);
return (0);
}
