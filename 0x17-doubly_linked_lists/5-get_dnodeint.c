#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node of a linked list.
 * @head: head of the structure
 * @index: int
 * Return: the node or null if it does not exists
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *list = head;
unsigned int i = 0;

if (head == NULL)
return (NULL);

while (list != NULL)
{
if (i == index)
return (list);
i++;
list = list->next;
}
return (NULL);
}
