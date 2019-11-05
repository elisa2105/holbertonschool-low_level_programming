#include "lists.h"
/**
 * get_nodeint_at_index - get the nth node of a linked list.
 * @head: head of the structure
 * @index: int
 * Return: the node or null if it does not exists
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *list = head;
unsigned int i = 0;

if (head == NULL)
return (0);

for (; list != NULL; i++)
{
if (i == index)
return (list);
list = list->next;
}
return (NULL);
}
