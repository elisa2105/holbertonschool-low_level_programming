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
node = add(n);
if (node == NULL)
return (NULL);
if (*head == NULL)
{
*head = node;
return (*head);
}
while (t->next != NULL)
t = t->next;
t->next = node;
return (*head);
}


/**
 * add - create a new node
 * @n: int
 * Return: the node
 */
listint_t *add(const int n)
{
listint_t *node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);
node->n = n;
node->next = NULL;
return (node);
}
