#include "lists.h"
/**
 * print_listint - prints all the elements of a list_t list.
 * @h: type struct
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t i;
const listint_t *x;
x = h;
if (x == NULL)
return (0);
for (i = 1; x->next != NULL; i++)
{
printf("%d\n", x->n);
x = x->next;
}
printf("%d\n", x->n);
return (i);
}
