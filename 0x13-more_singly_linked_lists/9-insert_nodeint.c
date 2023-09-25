#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at given indx
 * @head: head node
 * @idx: index
 * @n: data(new node)
 * Return: NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));

if (!new || !head)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (i = 0; temp && i < indx; i++)
{
if (i == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
temp = temp->next;
}
return (NULL);
}
