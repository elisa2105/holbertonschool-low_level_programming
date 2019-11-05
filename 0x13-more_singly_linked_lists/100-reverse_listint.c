#include "lists.h"
/**
 * reverse_listint - reverses a linked list.
 * @head: type struct
 * Return: node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *an = NULL;
listint_t *n;
while ((*head) != NULL)
{
n = (*head)->next;
(*head)->next = an;
an = (*head);
(*head) = n;
}
*head = an;
return (*head);
}
