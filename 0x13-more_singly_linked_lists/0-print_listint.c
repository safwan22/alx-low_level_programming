#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *nxt_itm  = h;
size_t nxt = 0;

while (nxt_itm != NULL)
{
printf("%d\n", nxt_itm->n);
nxt += 1;
nxt_itm = nxt_itm->next;
}
return (nxt);
}
