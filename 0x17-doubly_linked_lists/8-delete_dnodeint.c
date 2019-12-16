#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node in a position of a linked list
 * @head: head of the structure
 * @index: index of the list
 * Return: 1 if success -1 if error
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *t = *head;
unsigned int count = 0;

if (*head == NULL || head == NULL)
return (-1);

if (index ==  0)
{
*head = t->next;
if (t->next != NULL)
(*head)->prev = NULL;
free(t);
return (1);
}

while (t != NULL)
{
if (count == index)
{
if (t->next != NULL)
t->next->prev = t->prev;
if (t->prev != NULL)
t->prev->next = t->next;
}
free(t);
count++;
return (1);
}
return (-1);
}
