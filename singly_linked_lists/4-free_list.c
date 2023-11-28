#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to the head of the list.
 */
void free_list(list_t *head)
{
list_t *temp;
while (head != NULL)
{
temp = head->next; /* Save the reference to the next node */
free(head->str);   /* Free the malloc'ed string */
free(head);        /* Free the node */
head = temp;       /* Move to the next node */
}
}
