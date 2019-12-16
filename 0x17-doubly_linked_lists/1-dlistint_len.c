#include "lists.h"
/**
 * dlistint_len - number of elements in a linked list
 * @h: list head
 * Return: int size
 */
size_t dlistint_len(const dlistint_t *h)
{
int i = 0;
for (; h != NULL ; i++)
h = h->next;
return (i);
}
