#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: unsigned int
 * Return:  void
*/
void *malloc_checked(unsigned int b)
{
char *cont;
cont = malloc(b);
if (cont == NULL)
exit(98);
else
return (cont);
}
