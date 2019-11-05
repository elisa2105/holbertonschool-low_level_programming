#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of the list
 * @head: head of the structure
 * @n: int
 * Return: Pointer to the head of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *t = *head;
listint_t *node;
if (head == NULL)
return (NULL);
node = malloc(sizeof(listint_t));
node->n = n;
node->next = NULL;
if (*head == NULL)
{
*head = node;
return (*head);
}
while (t->next != NULL)
t = t->next;
t->next = node;
return (node);
}
