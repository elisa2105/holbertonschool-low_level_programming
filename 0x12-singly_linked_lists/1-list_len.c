#include "lists.h"
/**
 * list_len - number of elements in a linked list_t list.
 * @h: type struct
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{

int i = 0;
for (; h != NULL ; i++)
h = h->next;
return (i);
}
