/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the start of the list_t list.
 *
 * Description: Iterates over each node in the list. For each node, prints
 * the length of the str and the str itself. If str is NULL, prints [0] (nil).
 * The function keeps track of the number of nodes and returns this count.
 * Usage of printf is allowed in this function.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
size_t node_count = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
node_count++;
}
return (node_count);
}
