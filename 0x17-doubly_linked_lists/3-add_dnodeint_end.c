#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head of list
 * @n: int
 * Description: adds a new node at the beginning of a list.
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *nnode = NULL;
dlistint_t *tmp = *head;
if (nnode == NULL)
return (NULL);
nnode = malloc(sizeof(dlistint_t));
nnode->n = n;
nnode->next = NULL;

if ((*head) == NULL)
{
nnode->prev = NULL;
*head = nnode;
return (*head);
}
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = nnode;
nnode->prev = tmp;
return (*head);
}
