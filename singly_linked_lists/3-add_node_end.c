#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to the head of the list.
 * @str: string to duplicate for the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
/* Allocate memory for the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
/* Duplicate the string */
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = NULL;
/* If the list is empty, new node becomes the head */
if (*head == NULL)
{
*head = new_node;
}
else
{
/* Traverse to the last node */
temp = *head;
while (temp->next != NULL)
temp = temp->next;
/* Link the last node to the new node */
temp->next = new_node;
}
return (new_node);
}
