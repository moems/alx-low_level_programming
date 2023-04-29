#include "lists.h"

/**
 * add_nodeint_end - add a node to a linked list.
 * @n: data to be added to new node.
 * @head: head of the linked list
 *
 * Return: Address to the newly created node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tail;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (!(*head))
	{
		*head = ptr;
		return (*head);
	}

	tail = *head;
	while (tail->next)
		tail = tail->next;

	tail->next = ptr;

	return (ptr);
}
