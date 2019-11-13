#include "holberton.h"
/**
 * main - Entry point
 * @ac: number of arguments
 * @av: arguments
 * Return: Always 0.
*/
int main(int ac, char **av)
{
char *go;
char *to;
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
go = av[1];
to = av[2];
if (go == NULL)
{
_error1(go);
}
if (to == NULL)
{
_error1(to);
}
cp(go, to);
return (0);
}
/**
 * _error1- prints the error 98
 * @xo: file with failure
 */
void _error1(char *xo)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", xo);
exit(98);
}

/**
 * cp - copy a file to other file
 * @go: file to be copied
 * @to: file
 * Return: 1 on success, -1 on failure
 */
int cp(char *go, char *to)
{
int in, out, i, j;
char buffer[1024];

in = open(go, O_RDONLY);

if (in == -1)
_error1(go);

out = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

if (out == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
exit(99);
}

do {
i = read(in, buffer, 1024);
if (i == -1)
_error1(go);
j = write(out, buffer, i);
if (j == -1 || j != i)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
exit(99);
}
} while (i == 1024);
if (close(in) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", go);
exit(100);
}
if  (close(out) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", to);
exit(100);
}
return (0);
}
