#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node in a position of a linked list
 * @head: head of the structure
 * @index: index of the list
 * Return: 1 if success -1 if error
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *t = *head;
listint_t *n;
unsigned int count = 0;
if (*head == NULL)
return (-1);
if (index ==  0)
{
*head = t->next;
free(t);
return (1);
}
while (t != NULL && count < index - 1)
t = t->next;
if (t == NULL || t->next == NULL)
return (-1);
n = t->next->next;
free(t->next);
t->next = n;
return (1);
}
