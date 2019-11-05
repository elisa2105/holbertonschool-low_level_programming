#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of the structure
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *t = *head;
int node = 0;
if (head == NULL)
return (0);
if (*head == NULL)
return (0);
node = t->n;
*head = t->next;
free(t);
return (node);
}
