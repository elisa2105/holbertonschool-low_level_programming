#include "lists.h"
/**
 * new - inserts a new node at a given position.
 * @data: int
 * Return: Pointer to the head of the list
 */
dlistint_t *new(int data)
{
dlistint_t *node;
node = malloc(sizeof(dlistint_t));
if (node == NULL)
return (NULL);
node->n = data;
node->next = NULL;
node->prev = NULL;
return (node);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the structure
 * @n: int
 * @idx: index
 * Return: Pointer to the head of the list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *node;
dlistint_t *t;
unsigned int i = 0;
if (head == NULL)
return (NULL);
node = new(n);
if (node == NULL)
return (NULL);
if (idx == 0)
{
if (*h == NULL)
*h = node;
else
{
node->next = t;
t->prev = node;
*h = node;
}
return (node);
}
else
{
for (i = 0; t != NULL; i++)
{
if (i + 1 == idx)
{
if (t->next != NULL)
t->next->prev = node;
node->next = t->next;
t->next = node;
nodo->prev = t;
return (node);
}
t = t->next;
}
}
free(node);
return (NULL);
}
