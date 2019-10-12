#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: unused
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
int i = 0;
for ( ; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
