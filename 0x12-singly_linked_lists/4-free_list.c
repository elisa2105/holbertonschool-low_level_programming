#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: head of the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
list_t *a;
if (head == NULL)
return;
while (head->next != NULL)
{
a = head->next;
free(head->str);
free(head);
head = a;
}
free(head->next);
free(head->str);
free(head);
}
