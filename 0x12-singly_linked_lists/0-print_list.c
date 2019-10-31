#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: type struct
 * Return: Number of nodes
 */
size_t print_list(const list_t *h);
{
int i = 1; 
if (h == NULL)
return (0);
for (; h->n != NULL ; i++)
{
if (h->s == NULL)
printf("[0] (nil)");
else
printf("[%u] %s\n",h->l,h->s);
h = h->next;
}
printf("[%u] %s\n", h->l,h->s);
return (n);
}
