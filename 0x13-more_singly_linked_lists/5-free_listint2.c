#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: type struct
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
listint_t *t;
if (head == NULL)
return;
if (*head == NULL)
return;
while ((*head)->next != NULL)
{
t = (*head)->next;
free(*head);
*head = t;
}
free((*head)->next);
free(*head);
*head = NULL;
}
