#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: type struct
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
if (head == NULL)
return (NULL);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
if (*head == NULL)
new->next = NULL;
else
new->next = *head;
new->str = strdup(str);
new->len = _strlen(str);
*head = new;
return (*head);
}


/**
 * _strlen - calculate the length of a string
 * @s: string
 * Return: the lenght of the string
 */
int _strlen(const char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
