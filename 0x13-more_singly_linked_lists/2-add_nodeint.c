#include "lists.h"

/**
 *add_nodeint - Adds a new node at the beginning
 *of a listint_t list
 *@head: A pointer to the address of the head of the listint_t list
 *@n: the integer for the new node to contain
 *
 *Return: NULL if function fails
 *Or address of element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_lst;

	new_lst = malloc(sizeof(listint_t));
	if (new_lst == NULL)
		return (NULL);

	new_lst->n = n;
	new_lst->next = *head;

	*head = new_lst;

	return (new_lst);
}
