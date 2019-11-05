#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of the structure
 * @n: int
 * @idx: index
 * Return: Pointer to the head of the list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node;
listint_t *t;
unsigned int i = 0;
if (head == NULL)
return (NULL);
node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);
node->n = n;
if (idx == 0)
{
node->next = *head;
*head = node;
return (node);
}
else
{
t = *head;
for (i = 1; t != NULL; i++)
{
if (i == idx)
{
node->next = t->next;
t->next = node;
return (node);
}
t = t->next;
}
}
return (NULL);
}
