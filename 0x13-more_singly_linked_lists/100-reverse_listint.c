#include "lists.h"
/**
 * reverse_listint - reverses a linked list.
 * @head: type struct
 * Return: node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *an = NULL;
listint_t *ac = *head;
listint_t *n;
while (ac != NULL)
{
n = ac->next;
ac->next = an;
an = ac;
ac = n;
}
*head = an;
return (*head);
}
