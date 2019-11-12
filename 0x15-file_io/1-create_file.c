#include "holberton.h"
/**
 * create_file - creates a file with rw------- permission
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int n;
int i = 1;
int size = 0;
if (filename == NULL)
return (-1);
if (text_content == NULL)
text_content = "";
n = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (n < 0)
{
if (errno == EEXIST)
{
n = open(filename, O_WRONLY | O_TRUNC);
if (n == -1)
return (-1);
}
else
return (-1);
}
while (text_content[size] != '\0')
size++;
i = write(n, text_content, size);
if (i == -1)
return (-1);
close(n);
return (1);
}
