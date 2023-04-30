#include "lists.h"

/**
 * get_nodeint_at_index - Gets the data of a node at an index.
 *			  of a linked list.
 *
 * @head:  The head of the linked list.
 * @index: The index of the requested node.
 *
 * Return: A pointer to node at index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr;

	if (!head)
		return (NULL);

	ptr = head;

	while (i < index && ptr)
	{
		ptr = ptr->next;
		i++;
	}

	return (ptr);
}
