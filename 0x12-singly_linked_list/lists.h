#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdlib.h>
#include <stdio.h>
typedef struct list
{
char *s;
unsigned int l;
struct list *n;
}list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
#endif
