#include "lists.h"
/**
 * free_listint -  frees a list.
 * @head: head of the structure
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
listint_t *t;
if (head == NULL)
return;
while (head->next != NULL)
{
t = head->next;
free(head);
head = t;
}
free(head->next);
free(head);
}
