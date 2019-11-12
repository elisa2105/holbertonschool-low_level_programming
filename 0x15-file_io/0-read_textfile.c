#include "holberton.h"
/**
 * read_textfile - reads a file and prints it to the standard output.
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int n;
int i = 1;
int j = 1;
char *text = malloc(sizeof(char) * letters + 1);
if (text == NULL)
return (0);
if (filename == NULL)
return (0);
n = open(filename, O_RDONLY);
if (n != -1)
j = read(n, text, letters);
else
j = 0;
text[j] = '\0';
i = write(STDOUT_FILENO, text, j);
if (i == -1)
j = 0;
close(n);
free(text);
return (j);
}
