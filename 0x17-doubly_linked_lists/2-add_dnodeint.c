#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list_t list.
 * @head: type struct
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
if (head == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
if (*head == NULL)
{
new->next = *head;
new->n = n;
new->prev = NULL;
*head = new;
}
return (*head);
}
