#include "lists.h"
/**
 * sum_listint - sums the data in the linked list
 * @head: head of the structure
 * Return: if empty returns 0 otherwise the sum
 */
int sum_listint(listint_t *head)
{
listint_t *list = head;
int i = 0;

if (head == NULL)
return (0);
for (; list != NULL; i++)
{
i += list->n;
list = list->next;
}
return (i);
}
