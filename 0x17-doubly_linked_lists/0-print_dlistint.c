#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: const
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
unsigned int i = 0;
if (h == NULL)
return (0);
while (h)
{
i++;
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
