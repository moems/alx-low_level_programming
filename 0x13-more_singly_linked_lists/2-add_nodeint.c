#include "lists.h"

/**
 * add_nodeint - add a node to a linked list.
 * @n: data to be added to new node.
 * @head: head of the linked list
 *
 * Return: Address to the newly created node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int i;
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
