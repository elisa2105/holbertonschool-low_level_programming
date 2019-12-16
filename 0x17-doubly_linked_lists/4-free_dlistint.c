#include "lists.h"
/**
 * free_dlistint - frees a list_t list.
 * @head: head of the list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *a;
if (head == NULL)
return;
while (head->next != NULL)
{
a = head->next;
free(head);
head = a;
}
free(head->next);
free(head);
}
