#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - nth node
 * @head: head node
 * @index: position of nth node
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
