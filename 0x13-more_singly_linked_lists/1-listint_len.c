#include "lists.h"
/**
 * listint_len - counts the elements in a linked list.
 * @h: type struct
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;
if (h == NULL)
return (0);
while (h->next != NULL)
{
i++;
h = h->next;
}
i++;
return (i);
}
