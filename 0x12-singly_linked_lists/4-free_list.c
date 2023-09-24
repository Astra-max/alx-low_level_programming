#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Deletes all nodes
 * Return: 0
 * @head: first node
*/

void free_list(list_t *head)
{

list_t *current_node;

while ((current_node = head) != NULL)
{
head = head->next;
free(current_node->str);
free(current_node);
}
}
